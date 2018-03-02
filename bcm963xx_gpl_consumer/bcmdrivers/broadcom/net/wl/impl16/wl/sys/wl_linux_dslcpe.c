/*
 * DSLCPE specific functions
 *
 * Copyright 2007, Broadcom Corporation
 * All Rights Reserved.
 *
 * THIS SOFTWARE IS OFFERED "AS IS", AND BROADCOM GRANTS NO WARRANTIES OF ANY
 * KIND, EXPRESS OR IMPLIED, BY STATUTE, COMMUNICATION OR OTHERWISE. BROADCOM
 * SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A SPECIFIC PURPOSE OR NONINFRINGEMENT CONCERNING THIS SOFTWARE.
 *
 * $Id$
 */

#include <typedefs.h>
#include <linuxver.h>

#include <linux/module.h>
#include <linux/pci.h>
#include <linux/netdevice.h>

#include <osl.h>

#include <wlioctl.h>

#include "bcm_map.h"
#include "bcm_intr.h"
#include "board.h"
#include "bcmnet.h"
#include "boardparms.h"
#include <wl_linux_dslcpe.h>

#if defined(DSLCPE) && defined(PROXYARP)
void proxyarp_module_exit(void);
int32 proxyarp_module_init(void);
#endif


#ifdef DSLCPE_DIAG
#include "DiagDef.h"
int diag_connected;

void wl_diag_cmd(unsigned char lineId, int diagCmd, int len, void *pCmdData) {
    switch (diagCmd) {
        case LOG_CMD_ENABLE_CLIENT:
            diag_connected = 1;
            printk("--Diag Connected--\n");
            break;
        case LOG_CMD_DISABLE_CLIENT:
            diag_connected = 0;
            printk("--Diag Disconnected--\n");
            break;
    }
}
#endif


#if LINUX_VERSION_CODE >= KERNEL_VERSION(2, 6, 30)
typedef struct wl_info wl_info_t;
extern int wl_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd);
extern int __devinit wl_pci_probe(struct pci_dev *pdev, const struct pci_device_id *ent);
extern void wl_free(wl_info_t *wl);
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2, 6, 20)
extern irqreturn_t wl_isr(int irq, void *dev_id);
#else
extern irqreturn_t wl_isr(int irq, void *dev_id, struct pt_regs *ptregs);
#endif

static struct net_device_ops wl_dslcpe_netdev_ops;
#endif
#include <bcmendian.h>
#include <bcmdevs.h>

unsigned char brcm_smp = 0;
/* USBAP */
#ifdef BCMDBUS
#include "dbus.h"
/* BMAC_NOTES: Remove, but just in case your Linux system has this defined */
#undef CONFIG_PCI
void *wl_dbus_probe_cb(void *arg, const char *desc, uint32 bustype, uint32 hdrlen);
void wl_dbus_disconnect_cb(void *arg);
#endif

#ifdef BCMDBG
extern int msglevel;
#endif
extern struct pci_device_id wl_id_table[];

extern bool
wlc_chipmatch(uint16 vendor, uint16 device);

#ifdef WMF
extern int32 emfc_module_init(void);
extern void emfc_module_exit(void);
#endif

struct net_device *
wl_netdev_get(struct wl_info *wl);
extern void wl_reset_cnt(struct net_device *dev);

#if defined(CONFIG_BCM_BPM) || defined(CONFIG_BCM_BPM_MODULE)
#include <linux/gbpm.h>
#endif

#define WL_FIFO_WMARK_POLICY
wl_wmark_t wl_wmark[2]; /* wmark structure */
int norm_wmark_tot = 400;
int pktc_wmark_tot = 2048;

/* mark wlx is up */
void wl_wmark_up(int unit)
{
	wl_wmark[unit].exist = 1;
}

/* mark wlx is down or non-exist */
void wl_wmark_down(int unit)
{
	wl_wmark[unit].exist = 0;
}

#ifdef WL_FIFO_WMARK_POLICY
/* 
two adapter shares one skb buffer mark.
cnt0 = number of skb queueed in wl0 txq
cnt1 = number of skb queueed in wl0 txq
cnt0+cnt1 < wmark_tot; To make sure not over the watermark
*/
bool wl_pkt_drop_on_wmark_check(uint unit, bool is_pktc)
{
	int cnt0, cnt1;
	bool ret = TRUE;
	int wmark_tot;
	
	/* only wl0 and wl1 */
	ASSERT( unit==0 || unit ==1 );

	wmark_tot = is_pktc ? pktc_wmark_tot : norm_wmark_tot;
	cnt0 = atomic_read(&(wl_wmark[0].pktbuffered));
	cnt1 = atomic_read(&(wl_wmark[1].pktbuffered));
	if (cnt0 + cnt1 < wmark_tot)
		ret = FALSE;

	/* enqueue pkt */
	return ret;
}
#endif /* WL_FIFO_WMARK_POLICY */

#ifdef WL_STATIC_WMARK_POLICY
/* 
each adapter allocate half of the skb buffers
cnt = number of skb queueed in wl0 txq
cnt < wmark_tot/2; To make sure not over the watermark
*/
bool wl_pkt_drop_on_wmark_check(uint unit, bool is_pktc)
{
	int cnt;
	bool ret = TRUE;
	int wmark_tot;

	/* only wl0 and wl1 */
	ASSERT( unit==0 || unit ==1 );

	wmark_tot = is_pktc ? pktc_wmark_tot : norm_wmark_tot;
	cnt = atomic_read(&(wl_wmark[unit].pktbuffered));

	if (unlikely(wl_wmark[1-unit].exist)) {
		if (cnt < wmark_tot/2)
			ret = FALSE;
	} 
	else 
		if (cnt < wmark_tot)
			ret = FALSE;

	/* enqueue pkt */
	return ret;
}
#endif /* WL_STATIC_WMARK_POLICY */

/*
 * wl_dslcpe_open:
 * extended hook for device open for DSLCPE.
 */
int wl_dslcpe_open(struct net_device *dev)
{
	return 0;
}

/*
 * wl_dslcpe_close:
 * extended hook for device close for DSLCPE.
 */
int wl_dslcpe_close(struct net_device *dev)
{
	return 0;
}
/*
 * wlc_dslcpe_boardflags:
 * extended hook for modifying boardflags for DSLCPE.
 */
void wlc_dslcpe_boardflags(uint32 *boardflags, uint32 *boardflags2)
{
	return;
}

/*
 * wlc_dslcpe_led_attach:
 * extended hook for when led is to be initialized for DSLCPE.
 */

void wlc_dslcpe_led_attach(void *config, dslcpe_setup_wlan_led_t setup_dslcpe_wlan_led)
{
#if defined (CONFIG_BCM96816)
	setup_dslcpe_wlan_led(config, 0, 1, WL_LED_ACTIVITY, 0);
	setup_dslcpe_wlan_led(config, 1, 1, WL_LED_BRADIO, 0);
#else
	setup_dslcpe_wlan_led(config, 0, 0, WL_LED_ACTIVITY, 1);
	setup_dslcpe_wlan_led(config, 1, 1, WL_LED_BRADIO, 1);
#endif
	return;
}

/*
 * wlc_dslcpe_led_detach:
 * extended hook for when led is to be de-initialized for DSLCPE.
 */
void wlc_dslcpe_led_detach(void)
{
	return;
}
/*
 * wlc_dslcpe_timer_led_blink_timer:
 * extended hook for when periodical(10ms) led timer is called for DSLCPE when wlc is up.
 */
void wlc_dslcpe_timer_led_blink_timer(void)
{
	return;
}
/*
 * wlc_dslcpe_led_timer:
 * extended hook for when led blink timer(200ms) is called for DSLCPE when wlc is up.
 */
void wlc_dslcpe_led_timer(void)
{
	return;
}

/*
 * wl_dslcpe_ioctl:
 * extended ioctl support on BCM63XX.
 */
int
wl_dslcpe_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
{
	int isup = 0;
	int error = -1;

#if defined(AEI_VDSL_TOOLBOX)
	if ((cmd >= SIOCGLINKSTATE && cmd < SIOCLAST) &&
	    (cmd != SIOCPORTMIRROR)) {
#else
	if (cmd >= SIOCGLINKSTATE && cmd < SIOCLAST) {
#endif
		error = 0;
		/* we can add sub-command in ifr_data if we need to in the future */
		switch (cmd) {
			case SIOCGLINKSTATE:
				if (dev->flags&IFF_UP) isup = 1;
				if (copy_to_user((void*)(int*)ifr->ifr_data, (void*)&isup,
					sizeof(int))) {
					return -EFAULT;
				}
				break;
			case SIOCSCLEARMIBCNTR:
				wl_reset_cnt(dev);
				break;
		}
	} else {
		error = wl_ioctl(dev, ifr, cmd);
	}
	return error;
}

#if defined(CONFIG_PCI)
/* special deal for dslcpe */
int __devinit
wl_dslcpe_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
{
	struct wl_info *wl;
	struct net_device *dev;

	if (wl_pci_probe(pdev, ent))
		return -ENODEV;

	wl = pci_get_drvdata(pdev);
	ASSERT(wl);

	/* hook ioctl */
	dev = wl_netdev_get(wl);
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2, 6, 30)
    /* note -- this is sort of cheating, as we are changing
    * a pointer in a shared global structure, but... this should
    * work, as we are likely not to mix dslcpe wl's with non-dslcpe wl;s.
    * as well, it prevents us from having to export some symbols we don't
    * want to export.  A proper fix might be to add this to the
    * wlif structure, and point netdev ops there.
    */
    memcpy(&wl_dslcpe_netdev_ops, dev->netdev_ops, sizeof(struct net_device_ops));
    wl_dslcpe_netdev_ops.ndo_do_ioctl = wl_dslcpe_ioctl;
    dev->netdev_ops = &wl_dslcpe_netdev_ops;
#else
	ASSERT(dev);
	ASSERT(dev->do_ioctl);
	dev->do_ioctl = wl_dslcpe_ioctl;
#endif

#ifdef DSLCPE_DGASP
	kerSysRegisterDyingGaspHandler(dev->name, &wl_shutdown_handler, wl);
#endif

	return 0;
}

void __devexit wl_remove(struct pci_dev *pdev);

static struct pci_driver wl_pci_driver = {
	name:		"wl",
	probe:		wl_dslcpe_probe,
	remove:		__devexit_p(wl_remove),
	id_table:	wl_id_table,
	};

#endif  /* defined(CONFIG_PCI) */

/* USBAP  Could combined with wl_dslcpe_probe */
#ifdef BCMDBUS
static void *wl_dslcpe_dbus_probe_cb(void *arg, const char *desc, uint32 bustype, uint32 hdrlen)
{
	struct net_device *dev;
	wl_info_t *wl = wl_dbus_probe_cb(arg, desc, bustype, hdrlen);
	int irq;

	ASSERT(wl);

	/* hook ioctl */
	dev = wl_netdev_get(wl);
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2, 6, 30)
    /* note -- this is sort of cheating, as we are changing
    * a pointer in a shared global structure, but... this should
    * work, as we are likely not to mix dslcpe wl's with non-dslcpe wl;s.
    * as well, it prevents us from having to export some symbols we don't
    * want to export.  A proper fix might be to add this to the
    * wlif structure, and point netdev ops there.
    */
    memcpy(&wl_dslcpe_netdev_ops, dev->netdev_ops, sizeof(struct net_device_ops));
    wl_dslcpe_netdev_ops.ndo_do_ioctl = wl_dslcpe_ioctl;
    dev->netdev_ops = &wl_dslcpe_netdev_ops;
#else
	ASSERT(dev);
	ASSERT(dev->do_ioctl);
	dev->do_ioctl = wl_dslcpe_ioctl;
#endif

#ifdef DSLCPE_DGASP
	kerSysRegisterDyingGaspHandler(dev->name, &wl_shutdown_handler, wl);
#endif
	return 0;
}

static void wl_dslcpe_dbus_disconnect_cb(void *arg)
{
	wl_dbus_disconnect_cb(arg);
}
#endif /* BCMDBUS */

#ifdef DSLCPE_CACHE_SMARTFLUSH
extern uint dsl_tx_pkt_flush_len;
#endif

static int __init
wl_module_init(void)
{

	int error;
	int i;
#ifdef DSLCPE_DIAG
	printk("--DSLCPE_DIAG--\n");
	BcmDiagsMgrRegisterClient(DIAG_WLAN_CLIENT, wl_diag_cmd);
#endif
#ifdef CONFIG_SMP
       printk("--SMP support\n");
	brcm_smp = 1;
#endif
#ifdef CONFIG_BCM_WAPI
       printk("--WAPI support\n");
#endif

#if defined(DSLCPE_CACHE_SMARTFLUSH) && defined(PKTDIRTYPISPRESENT)
	printk("wl: dsl_tx_pkt_flush_len=%d\n", dsl_tx_pkt_flush_len);
#endif

#if defined(CONFIG_BCM_BPM) || defined(CONFIG_BCM_BPM_MODULE)
#ifdef CONFIG_GBPM_API_HAS_GET_TOTAL_BUFS
	norm_wmark_tot = (int) (gbpm_get_max_dyn_bufs()*65/100);
#endif /* CONFIG_BPM_API_HAS_GET_TOTAL_BUFS */
#endif
	printk("wl: norm_wmark_tot=%d, pktc_wmark_tot=%d\n", norm_wmark_tot, pktc_wmark_tot);

	if (wl_config_check())
		return -1;
#ifdef BCMDBG
	if (msglevel != 0xdeadbeef) {
		/* wl_msg_level = msglevel; */
		printf("%s: msglevel set to 0x%x\n", __FUNCTION__, msglevel);
	}
#endif /* BCMDBG */

#ifdef WMF
	if (emfc_module_init()) {
		return -1;
	}
#endif 

	for (i=0; i<2; i++) {
	 	atomic_set(&(wl_wmark[i].pktbuffered), 0);
		wl_wmark_down(i);
	}


#ifdef CONFIG_PCI
	if (!(error = pci_module_init(&wl_pci_driver)))
		return (0);
#endif /* CONFIG_PCI */

#ifdef BCMDBUS
	/* BMAC_NOTE: define hardcode number, why NODEVICE is ok ? */
	error = dbus_register(BCM_DNGL_VID, BCM_DNGL_BDC_PID, wl_dslcpe_dbus_probe_cb,
		wl_dslcpe_dbus_disconnect_cb, NULL, NULL, NULL);
	if (error == DBUS_ERR_NODEVICE) {
		error = DBUS_OK;
	}
#endif /* BCMDBUS */

#if defined(DSLCPE) && defined(PROXYARP)
	proxyarp_module_init();
#endif

	return (error);
}

static void __exit
wl_module_exit(void)
{

#ifdef CONFIG_PCI
	pci_unregister_driver(&wl_pci_driver);
#endif	/* CONFIG_PCI */

#ifdef BCMDBUS
	dbus_deregister();
#endif /* BCMDBUS */
#ifdef WMF
	emfc_module_exit();
#endif /* WMF */
#if defined(DSLCPE) && defined(PROXYARP)
	proxyarp_module_exit();
#endif
}

/* Turn 63xx GPIO LED On(1) or Off(0) */
void wl_dslcpe_led(unsigned char state)
{
/*if WLAN LED is from 63XX GPIO Line, define compiler flag GPIO_LED_FROM_63XX
#define GPIO_LED_FROM_63XX
*/

#ifdef GPIO_LED_FROM_63XX
	BOARD_LED_STATE led;
	led = state? kLedStateOn : kLedStateOff;

	kerSysLedCtrl(kLedSes, led);
#endif
}

#ifdef DSLCPE_PKTC

ctf_brc_hot_t brc_hot[TOTAL_CHAIN_ENTRY_NUM];
pktc_devhandle_t pktc_wldev[WLAN_DEVICE_MAX];

int pktc_tx_enabled = 1;

/* for packet chaining */
uint32_t wl_pktc_req( int req_id, uint32_t param0, uint32_t param1, uint32_t param2 )
{
    int i;

    switch ( req_id )
    {
        case BRC_HOT_GET_BY_DA:
        {
            /* param0 is DA */
            return (CTF_BRC_HOT_LOOKUP(brc_hot, (uint8_t*)param0));
        }

        case BRC_HOT_GET_TABLE_TOP:
        {
            return (uint32_t)(&brc_hot[0]);
        }

        case BRC_HOT_GET_BY_IDX:
        {
            /* param0 is pktc chain table index */
            if (param0 >= TOTAL_CHAIN_ENTRY_NUM) {
                printk("chain idx is out of range! (%d)\n", param0);
                return 0;
            }
            if (!(brc_hot[param0].in_use) || !(brc_hot[param0].wl_handle)) {
                printk("Error : chain idx %d is not in use or invalid handle 0x%x\n", param0, brc_hot[param0].wl_handle);
                return 0;
            }
            return (uint32_t)(&brc_hot[param0]);
        }

        case UPDATE_WLAN_HANDLE:
        {
            for (i=0; i<WLAN_DEVICE_MAX; i++)
            {
                if (pktc_wldev[i].handle == 0)
                     break; /* found the empty entry */
            }
            if (i == WLAN_DEVICE_MAX) {
                printk("wlan device number is out of range! (%d)\n", i);
                return -1;
            }
			
            /* param0 is wl info pointer, param1 is dev */
            pktc_wldev[i].handle = (uint32_t)param0;
            pktc_wldev[i].dev = param1;
            return 0;
        }

#if (defined(CONFIG_BCM_RDPA)||defined(CONFIG_BCM_RDPA_MODULE))
        case UPDATE_WFD_IDX_BY_WL_DEV:
        {
            for (i=0; i < WLAN_DEVICE_MAX; i++)
            {
                if (pktc_wldev[i].dev == param0)
                {
                     pktc_wldev[i].wfd_idx = param1;
                   //  printk("Found dev 0x%x updating wfd_idx %d i %d\n", pktc_wldev[i].dev, pktc_wldev[i].wfd_idx, i);
                     return 0; /* found the matching wl dev entry */
                }
            }
            if (i == WLAN_DEVICE_MAX) {
                printk("ERROR, Matching WLAN device entry not found for dev(0x%x)\n", param0);
                return -1;
            }
            break;
        }
#endif
        
        case SET_PKTC_TX_MODE:
        {
            /* param0 is enable: 1 or disable: 0 */
            pktc_tx_enabled = param0;
        }

        case GET_PKTC_TX_MODE:
        {
#if (defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148)) && (!defined(CONFIG_BCM_WFD_CHAIN_SUPPORT))
            /* Tx chaining disabled. Return 0 */
            return 0;
#endif
            /* enable: 1 or disable: 0 */
            return pktc_tx_enabled;
        }

        case UPDATE_BRC_HOT:
        {
            ctf_brc_hot_t *bh;
			
            /* param1 is tx device */
            for (i=0; i<WLAN_DEVICE_MAX; i++) {
              if (pktc_wldev[i].dev == param1) {
                   param2 = (uint32_t)&pktc_wldev[i];
                   break;
               }
            }
            /* param0 is addr, param1 is dev, param2 is wl handle if any */
            bh = (ctf_brc_hot_t *)CTF_BRC_HOT_UPDATE(brc_hot, (uint8_t *)param0, (struct net_device *)param1, (pktc_devhandle_t *)param2);
            if ((bh==NULL) || (bh->idx >= TOTAL_CHAIN_ENTRY_NUM))
                return INVALID_CHAIN_IDX;
#if (defined(CONFIG_BCM_RDPA)||defined(CONFIG_BCM_RDPA_MODULE))
            {
                uint16 wfd_idx = bh->wfd_idx;
               // printk("bh->wfd_idx 0x%x bh->idx 0x%x return value 0x%x wfd_idx after rotate 0x%x\n", 
                  //     bh->wfd_idx, bh->idx,
                  //     ((bh->idx & (~WFD_IDX_UINT16_BIT_MASK)) | (wfd_idx << WFD_IDX_UINT16_BIT_POS)),
                    //   (wfd_idx << WFD_IDX_UINT16_BIT_POS)); 
                return ((bh->idx & (~WFD_IDX_UINT16_BIT_MASK)) | (wfd_idx << WFD_IDX_UINT16_BIT_POS));
            }
#else
            return bh->idx; /* return chain index */
#endif
        }
		
        case DELETE_BRC_HOT:
        {
            CTF_BRC_HOT_CLEAR(brc_hot, (uint8 *)param0);
            return 0;
        }

        case DUMP_BRC_HOT:
        {
            int i;
            printk("brc_hot dump: \n");
            for (i=0; i<TOTAL_CHAIN_ENTRY_NUM; i++) {
                if (brc_hot[i].in_use) {
#if (defined(CONFIG_BCM_RDPA)||defined(CONFIG_BCM_RDPA_MODULE))
                    printk("[%02d] %02x:%02x:%02x:%02x:%02x:%02x, dev=%s (%p), wl_handle=0x%x, wfd_idx %d hits=%d\n", brc_hot[i].idx,
#else
                    printk("[%02d] %02x:%02x:%02x:%02x:%02x:%02x, dev=%s (%p), wl_handle=0x%x, hits=%d\n", brc_hot[i].idx,
#endif
                        brc_hot[i].ea.octet[0],
                        brc_hot[i].ea.octet[1],
                        brc_hot[i].ea.octet[2],
                        brc_hot[i].ea.octet[3],
                        brc_hot[i].ea.octet[4],
                        brc_hot[i].ea.octet[5],
#if (defined(CONFIG_BCM_RDPA)||defined(CONFIG_BCM_RDPA_MODULE))
                        (brc_hot[i].tx_dev == NULL) ? "NULL" : brc_hot[i].tx_dev->name, brc_hot[i].tx_dev, brc_hot[i].wl_handle, brc_hot[i].wfd_idx, brc_hot[i].hits);
#else
                        (brc_hot[i].tx_dev == NULL) ? "NULL" : brc_hot[i].tx_dev->name, brc_hot[i].tx_dev, brc_hot[i].wl_handle, brc_hot[i].hits);
#endif
				}
			}
            return 0;
        }

        case DELETE_WLAN_HANDLE:
        {
            /* param0 is handle pointer */
            for (i=0; i<WLAN_DEVICE_MAX; i++)
            {
                if (pktc_wldev[i].handle == param0)
                {
                    pktc_wldev[i].dev = 0;
                    pktc_wldev[i].handle = 0;
                }
            }
            return 0;
        }

        default:
            return 0;
    }
    return 0;
}

void wl_pktc_del(uint32 addr) {
    wl_pktc_req(DELETE_BRC_HOT, addr, 0, 0);
}


void ctf_brc_hot_clear_fn(ctf_brc_hot_t *brc, uint8_t *da)
{
	uint16_t brc_hash_idx = 0; 
	ctf_brc_hot_t *bh = NULL; 
	/* Primary Hash */
	brc_hash_idx = CTF_BRC_HOT_HASH(da);
	bh = &brc[brc_hash_idx]; 
	if (bh->in_use && _eacmp(bh->ea.octet, (da)) == 0) 
	{ 
		memset(bh, 0, sizeof(ctf_brc_hot_t));
		return; 
	} 
	/* Secondary Hash */
	brc_hash_idx = CTF_BRC_HOT_HASH_2(da);
	bh = &brc[brc_hash_idx]; 
	if (bh->in_use && _eacmp(bh->ea.octet, (da)) == 0) 
	{ 
		memset(bh, 0, sizeof(ctf_brc_hot_t));
		return; 
	} 
	return ;
}

uint32_t ctf_brc_hot_update_fn(ctf_brc_hot_t *brc, uint8_t *da, struct net_device *dev, pktc_devhandle_t *handle_p)
{
	uint16_t brc_hash_idx = 0, brc_hash_idx2=0; 
	ctf_brc_hot_t *bh, *bh2;
	
	if (!dev) { /* device is a mandatory parameter */
		goto invalid_param_out;
	}
	/* Primary Hash */
	brc_hash_idx = CTF_BRC_HOT_HASH(da);
	brc_hash_idx2 = CTF_BRC_HOT_HASH_2(da);
	bh = &brc[brc_hash_idx]; 
	bh2 = &brc[brc_hash_idx2]; 
	if (!bh->in_use && !bh2->in_use) 
	{ /* Both Primary & Secondary hash index not in-use; Grab the first one */
		goto add_primary;
	}
	else if (!bh->in_use)
	{ /* Primary not in-use */
		if (_eacmp(bh2->ea.octet, (da)) == 0) 
		{ /* Exist in secondary */
			goto add_secondary_exist;
		}
		else
		{ /* Secondary is occupied - use unsed Primary */
			goto add_primary;
		}
	}
	else if (!bh2->in_use)
	{ /* Secondary not in-use */
		if (_eacmp(bh->ea.octet, (da)) == 0) 
		{ /* Exist in Primary */
			goto add_primary_exist;
		}
		else
		{ /* Primary is occupied - use unsed Secondary */
			goto add_secondary;
		}
	}
	else 
	{ /* Both are in-use */
		if (_eacmp(bh->ea.octet, (da)) == 0) 
		{ /* Exist in Primary */
			goto add_primary_exist;
		}
		else if (_eacmp(bh2->ea.octet, (da)) == 0)  
		{ /* Exist in Secondary */
			goto add_secondary_exist;
		}
	}
invalid_param_out:
	/* Reaching here means - both are occupied with different MAC : Unavailable */
	/*printk("Hash collision : Entry %d occupied [%02x:%02x:%02x:%02x:%02x:%02x]\n", 
	  brc_hash_idx,bh->ea.octet[0],bh->ea.octet[1],bh->ea.octet[2],bh->ea.octet[3],bh->ea.octet[4],bh->ea.octet[5]); */
	return 0;

add_primary:
	bh->ea = *(struct _macaddr *)(da); 
	bh->idx = brc_hash_idx; 
	bh->in_use = 1;
add_primary_exist:
	bh->tx_dev = dev; 
	if (handle_p) 
    {
        bh->wl_handle = handle_p->handle;
#if (defined(CONFIG_BCM_RDPA)||defined(CONFIG_BCM_RDPA_MODULE))
        bh->wfd_idx = handle_p->wfd_idx;
      //  printk("bh->wfd_idx %d handle_p->wfd_idx %d\n", bh->wfd_idx, handle_p->wfd_idx);
#endif
    }
	return (uint32_t)bh; 
add_secondary:
	bh2->ea = *(struct _macaddr *)(da); 
	bh2->idx = brc_hash_idx2; 
	bh2->in_use = 1;
add_secondary_exist:
	bh2->tx_dev = dev; 
	if (handle_p) 
    {
        bh2->wl_handle = handle_p->handle; 
#if (defined(CONFIG_BCM_RDPA)||defined(CONFIG_BCM_RDPA_MODULE))
        bh2->wfd_idx = handle_p->wfd_idx;
#endif
    }
	return (uint32_t)bh2; 
}

uint32_t ctf_brc_hot_lookup_fn(ctf_brc_hot_t *brc, uint8_t *da)
{
	uint16_t brc_hash_idx = 0; 
	ctf_brc_hot_t *bh = NULL; 
	/* Primary Hash */
	brc_hash_idx = CTF_BRC_HOT_HASH(da);
	bh = &brc[brc_hash_idx]; 
	if (bh->in_use && _eacmp(bh->ea.octet, (da)) == 0) 
	{ 
		return (uint32_t)bh; 
	} 
	/* Secondary Hash */
	brc_hash_idx = CTF_BRC_HOT_HASH_2(da);
	bh = &brc[brc_hash_idx]; 
	if (bh->in_use && _eacmp(bh->ea.octet, (da)) == 0) 
	{ 
		return (uint32_t)bh; 
	} 
	return 0;
}

#endif /* DSLCPE_PKTC */

module_init(wl_module_init);
module_exit(wl_module_exit);
MODULE_LICENSE("Proprietary");
