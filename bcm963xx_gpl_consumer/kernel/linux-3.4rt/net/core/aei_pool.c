#include <linux/pci.h>
#include <linux/spinlock.h>
#include <linux/proc_fs.h>
#include <linux/module.h>
#include "aei_pool.h"

static struct sk_buff_head aei_skb_list;
static struct list_head aei_data_list;
static spinlock_t aei_pool_lock;
static void aei_recycle_hook(struct sk_buff *skb, unsigned int context, unsigned int free_flag);

#define POOL_SIZE 4000

enum {
	AEI_POOL_SIZE,
	AEI_POOL_SKB_SLOW_ALOC,
	AEI_POOL_SKB_FAST_ALLOC,
	AEI_POOL_SKB_FREE,
	AEI_POOL_DATA_FAST_ALLOC,
	AEI_POOL_DATA_FREE,
	AEI_POOL_STAT_NUM
};

static unsigned int aei_pool_stat[AEI_POOL_STAT_NUM];

static char *aei_pool_stat_str[AEI_POOL_STAT_NUM] = {
	"skb_pool_size",
	"skb_slow_alloc",
	"skb_fast_alloc",
	"skb_free",
	"data_fast_alloc",
	"data_free",
};

static int aei_pool_stat_read(char * buf, char ** start, off_t off,
		int count, int *eof, void *_data)
{
	int i;

	for (i = 0; i <  AEI_POOL_STAT_NUM; i++)
		printk("%s: %d\n", aei_pool_stat_str[i], aei_pool_stat[i]);

	return 0;
}

static void __init aei_pool_stat_init(void)
{
	struct proc_dir_entry *stat_proc = create_proc_entry("aei_pool_stat", S_IRUSR, NULL);

	BUG_ON(!stat_proc);
	stat_proc->read_proc = aei_pool_stat_read;
	stat_proc->data = NULL;
}

void aei_pool_init(int data_size)
{
	struct sk_buff *skb;
	struct aei_cached_data *cached;
	int i;

	skb_queue_head_init(&aei_skb_list);
	INIT_LIST_HEAD(&aei_data_list);

	/* Pre-alloc skb */
	for (i = 0; i < POOL_SIZE; i++) {
		skb = dev_alloc_skb(data_size);
		BUG_ON(!skb);

		__skb_queue_head(&aei_skb_list, skb);

		cached = (struct aei_cached_data *)skb->head;
		cached->size = skb_end_pointer(skb) - skb->head;
		list_add(&cached->node, &aei_data_list);
	}
	aei_pool_stat[AEI_POOL_SIZE] = POOL_SIZE;

	spin_lock_init(&aei_pool_lock);
	aei_pool_stat_init();
}
EXPORT_SYMBOL(aei_pool_init);

struct sk_buff *aei_get_skb(int size)
{
	struct sk_buff *skb;
	struct aei_cached_data *cached;
	struct list_head *entry;

	spin_lock_bh(&aei_pool_lock);
	skb = skb_peek(&aei_skb_list);
	if (!skb || list_empty(&aei_data_list)) {
		spin_unlock_bh(&aei_pool_lock);

		aei_pool_stat[AEI_POOL_SKB_SLOW_ALOC]++;
		/* Pool is empty. Should not happen. Try to get skb from kernel */
		return dev_alloc_skb(size);
	}

	entry = aei_data_list.next;
	cached = list_entry(entry, typeof(*cached), node);
	if (cached->size < size) {
		/* TODO: support different size */

		spin_unlock_bh(&aei_pool_lock);
		return dev_alloc_skb(size);
	}
	list_del(entry);

	/* Don't need skb_dequeue(), because it's already protected by aei_pool_lock */
	skb = __skb_dequeue(&aei_skb_list);
	spin_unlock_bh(&aei_pool_lock);

	/* init skb */
	memset(skb, 0, offsetof(struct sk_buff, truesize));
	skb->head = skb->data = skb->tail = (void *)cached;
	skb->end = skb->tail + size;
	skb->next = skb->prev = NULL;
	skb->len = 0;
	skb->cloned = 0;
	skb->truesize = size + sizeof(struct sk_buff);
	atomic_set(&skb->users, 1);

	memset(skb_shinfo(skb), 0, offsetof(struct skb_shared_info, dataref));
	atomic_set(&(skb_shinfo(skb)->dataref), 1);

	skb->recycle_hook = (RecycleFuncP)aei_recycle_hook;
	skb->recycle_flags = SKB_RECYCLE | SKB_DATA_RECYCLE;

	aei_pool_stat[AEI_POOL_SKB_FAST_ALLOC]++;
	aei_pool_stat[AEI_POOL_DATA_FAST_ALLOC]++;
	return skb;
}
EXPORT_SYMBOL(aei_get_skb);

static void aei_free_skb(struct sk_buff *skb)
{
	skb->tstamp.tv.sec = 0;
	skb->dev = NULL;
	skb->ip_summed = 0;
	skb->destructor = NULL;

	spin_lock_bh(&aei_pool_lock);
	/* Don't need skb_queue_head(), because it's already protected by aei_pool_lock */
	__skb_queue_head(&aei_skb_list, skb);
	spin_unlock_bh(&aei_pool_lock);
	aei_pool_stat[AEI_POOL_SKB_FREE]++;
}

static void aei_free_data(struct sk_buff *skb)
{
	struct aei_cached_data *cached;

	cached = (struct aei_cached_data *)skb->head;
	cached->size = skb_end_pointer(skb) - skb->head;

	spin_lock_bh(&aei_pool_lock);
	list_add(&cached->node, &aei_data_list);
	spin_unlock_bh(&aei_pool_lock);
	aei_pool_stat[AEI_POOL_DATA_FREE]++;
}

static void aei_recycle_hook(struct sk_buff *skb, unsigned int context, unsigned int free_flag)
{
	if (free_flag & SKB_RECYCLE)
		aei_free_skb(skb);
	else
		aei_free_data(skb);
}
