/*
   Copyright (c) 2007-2013 Broadcom Corporation
   All Rights Reserved

<:label-BRCM:2007:DUAL/GPL:standard

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
****************************************************************************
* File Name  : dectshimdrv.h
*
* Description: This file contains the definitions and structures for the
*              Linux IOCTL interface that used between the application and
*              kernel dect shim layer driver.
*
* Updates    : 04/23/2010  ALLIU  Created.
***************************************************************************/

#if !defined(_DECTSHIMDRV_H_)
#define _DECTSHIMDRV_H_

#if defined(__cplusplus)
extern "C" {
#endif

/* dectshim driver is following dect device driver major and minor number */
#define DECTSHIM_MAJOR    198
#define DECTSHIM_MINOR    0

typedef struct {
   unsigned int word0;
} DECTSHIMDRV_INIT_PARAM, *PDECTSHIMDRV_INIT_PARAM;

typedef struct {
   unsigned int word0;
} DECTSHIMDRV_PLL_PARAM, *PDECTSHIMDRV_PLL_PARAM;

typedef struct {
   unsigned int word0;
} DECTSHIMDRV_DMA_PARAM, *PDECTSHIMDRV_DMA_PARAM;

typedef struct {
   unsigned int channel_count;
} DECTSHIMDRV_CHANNELCOUNT_PARAM, *PDECTSHIMDRV_CHANNELCOUNT_PARAM;

typedef struct {
   unsigned long ddrAddrTxV;
	unsigned long ddrAddrRxV;
} DECTSHIMDRV_DMAADDR_PARAM, *PDECTSHIMDRV_DMAADDR_PARAM;


#define DECTSHIMIOCTL_INIT_CMD \
    _IOWR(DECTSHIM_MAJOR, 0, DECTSHIMDRV_INIT_PARAM)

#define DECTSHIMIOCTL_DEINIT_CMD \
    _IOWR(DECTSHIM_MAJOR, 1, DECTSHIMDRV_INIT_PARAM)

#define DECTSHIMIOCTL_PLL_CONFIG_CMD \
    _IOWR(DECTSHIM_MAJOR, 2, DECTSHIMDRV_PLL_PARAM)

#define DECTSHIMIOCTL_DMA_CONFIG_CMD \
    _IOWR(DECTSHIM_MAJOR, 3, DECTSHIMDRV_DMA_PARAM)

#define DECTSHIMIOCTL_GET_CHANNELS_CMD \
    _IOWR(DECTSHIM_MAJOR, 4, DECTSHIMDRV_CHANNELCOUNT_PARAM)

#define DECTSHIMIOCTL_GET_DMAADDR_CMD \
    _IOWR(DECTSHIM_MAJOR, 5, DECTSHIMDRV_DMAADDR_PARAM)
	 
#define MAX_DECTSHIM_IOCTL_CMDS  6


void dectShimDrvInit(void);
void dectShimDrvCleanup(void);

#if defined(__cplusplus)
}
#endif

#endif // _DECTSHIMDRV_H_
