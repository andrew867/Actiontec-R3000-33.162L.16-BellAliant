/*
<:copyright-BRCM:2013:DUAL/GPL:standard 

   Copyright (c) 2013 Broadcom Corporation
   All Rights Reserved

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License, version 2, as published by
the Free Software Foundation (the "GPL").

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.


A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.

:> 
*/

#include "clk_rst.h"
#include "pmc_drv.h"
#include "BPCM.h"

#ifndef _CFE_
#include <linux/module.h>
#endif

#if defined(_BCM96838_) || defined(CONFIG_BCM96838)
int pll_vco_freq_set(unsigned int pll_addr, struct PLL_DIVIDERS *divs)
{
	int ret = 0;
	uint32 val;
	
	ret |= WriteBPCMRegister(pll_addr, 7, (1 << 31) | (divs->ndiv_frac << 10) | divs->ndiv_int);
	ret |= WriteBPCMRegister(pll_addr, 8, (1 << 31) | divs->pdiv);
	ret |= WriteBPCMRegister(pll_addr, 9, (divs->kp << 12) | (divs->ki << 8) | (divs->ka << 4));
	//ret |= WriteBPCMRegister(pll_addr, 7, (divs->ndiv_frac << 10) | divs->ndiv_int);
	//ret |= WriteBPCMRegister(pll_addr, 8, divs->pdiv);
	
	do
	{
		ret = ReadBPCMRegister(pll_addr, 15, &val);
	}
	while( !ret && !(val & (1 << 31)));
	
	return ret;
}

int pll_ch_freq_set(unsigned int pll_addr, unsigned int ch, unsigned int mdiv)
{
	int ret = 0;
	uint32 val;
	unsigned int reg = 11;
	unsigned int off = 0;
	
	switch(ch)
	{
		case 0:
		case 1:
			reg = 11;
			break;
		case 2:
		case 3:
			reg = 12;
			break;
		case 4:
		case 5:
			reg = 13;
			break;
	}
	
	switch(ch)
	{
		case 1:
		case 3:
		case 5:
			off = 16;
			break;
	}

	ret = ReadBPCMRegister(pll_addr, reg, &val);
	if(!ret)
	{
		// reset LOAD_EN_CH0
		val &= ~(1 << (10+off));
		ret |= WriteBPCMRegister(pll_addr, reg, val);
		// set MDIV
		val &= ~(0xff << off);
		val |= (mdiv << off) | (1 << (15+off));
		ret |= WriteBPCMRegister(pll_addr, reg, val);
		// set LOAD_EN_CH0
		val |= (1 << (10+off));
		ret |= WriteBPCMRegister(pll_addr, reg, val);
	}
		
	return ret;
}
#endif

#if defined(_BCM96838_) || defined(CONFIG_BCM96838)
static struct DDR_DIVIDERS
{
	struct PLL_DIVIDERS pll;
	unsigned int mdiv;
} ddr_divs[] =
{
	{{1, 96, 0, 1, 2, 9}, 18},	//133MHz
	{{1, 96, 0, 1, 2, 9}, 9},	//266MHz
	{{2, 159, 0, 1, 1, 5}, 6},	//333MHz
	{{1, 48, 0, 1, 2, 7}, 3},	//400MHz
	{{2, 149, 0, 1, 1, 5}, 4},	//466MHz
	{{1, 85, 0, 1, 2, 9}, 4},	//533MHz
};

int ddr_freq_set(unsigned long freq)
{
	int ret = 0;
	int i = 5;

	switch(freq)
	{
		case 133:
			i = 0;
			break;

		case 266:
			i = 1;
			break;

		case 333:
			i = 2;
			break;

		case 400:
			i = 3;
			break;

		case 466:
			i = 4;
			break;

		case 533:
			i = 5;
			break;
	}
	
	ret = pll_vco_freq_set(PMB_ADDR_SYSPLL1, &(ddr_divs[i].pll));
	ret |= pll_ch_freq_set(PMB_ADDR_SYSPLL1, 0, ddr_divs[i].mdiv);
	
	return ret;
}
#endif

#define VCO0_FREQ	1200
#define VCO2_FREQ	1600

#if defined(_BCM96838_) || defined(CONFIG_BCM96838)
int viper_freq_set(unsigned long freq)
{
	return pll_ch_freq_set(PMB_ADDR_SYSPLL0, 0, VCO0_FREQ/freq);

}

int rdp_freq_set(unsigned long freq)
{
	return pll_ch_freq_set(PMB_ADDR_SYSPLL2, 0, VCO2_FREQ/freq);
}
#endif

#if defined(_BCM96838_) || defined(CONFIG_BCM96838)
unsigned long get_rdp_freq(unsigned int* rdp_freq)
{
	uint32 val;
	int ret = 0;
	unsigned int mdiv = 0;
 
	ret |= ReadBPCMRegister(PMB_ADDR_SYSPLL2, 11, &val);
	if (val & (1 << 15))
		mdiv = val & 0xff;

	if (mdiv)
		*rdp_freq = VCO2_FREQ/mdiv;
	else {
		*rdp_freq = 0;
		ret = -1;
	}

	return ret;
}
#elif defined(_BCM963138_) || defined(CONFIG_BCM963138) || defined(_BCM963148_) || defined(CONFIG_BCM963148)
#define RDP_PLL_REFCLK		50	/* 50 MHz for 63138 */
/* the formula here is
 * F_vco = (1 / pdiv) * (ndiv_int + ndiv_frac / (2 ^ 20)) * F_ref
 * F_clkout,n = (F_vco / mdiv_n)
 * ch#0 connects to runner block
 * ch#1 connects to test block
 * ch#2 connects to ipsec & rng block
 *
 * default values are:
 * ndiv_int = 0x8c (140)
 * ndiv_frac = 0
 * pdiv = 2
 * mdiv[0] = 0x5
 * mdiv[1] = 0xa
 * mdiv[2] = 0x23 (35).
 *
 * F_vco = 3500 MHz
 * F_clkout,0 = 700 MHz -> runner */
unsigned long get_rdp_freq(unsigned int *rdp_freq)
{
	int ret = 0;
	PLL_NDIV_REG pll_ndiv;
	PLL_PDIV_REG pll_pdiv;
	PLL_CHCFG_REG pll_ch01_cfg;

	ret |= ReadBPCMRegister(PMB_ADDR_RDPPLL, PLLBPCMRegOffset(ndiv),
			&pll_ndiv.Reg32);
	ret |= ReadBPCMRegister(PMB_ADDR_RDPPLL, PLLBPCMRegOffset(pdiv),
			&pll_pdiv.Reg32);
	ret |= ReadBPCMRegister(PMB_ADDR_RDPPLL, PLLBPCMRegOffset(ch01_cfg),
			&pll_ch01_cfg.Reg32);
	if (ret != 0)
		return -1;

	*rdp_freq = RDP_PLL_REFCLK * (pll_ndiv.Bits.ndiv_int);
	// FIXME! for simplicity, ndiv_frac is taken out.  Otherwise, the value
	// will be in form of double.
	*rdp_freq = *rdp_freq / pll_pdiv.Bits.pdiv / pll_ch01_cfg.Bits.mdiv0;

	return ret;
}
#endif

#ifndef _CFE_
EXPORT_SYMBOL(get_rdp_freq);
#endif

