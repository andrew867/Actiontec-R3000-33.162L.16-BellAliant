#ifndef _AEI_POOL_H_
#define _AEI_POOL_H_

#include <linux/skbuff.h>

struct aei_cached_data {
	struct list_head node;
	int size;
};

void aei_pool_init(int data_size);
struct sk_buff *aei_get_skb(int size);

#endif
