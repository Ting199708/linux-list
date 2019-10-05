#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "list.h"
#include "common.h"

static uint16_t values[256];

void merge_sort(list_head *list) {

}

int main() {
	struct list_head testlist;
	struct listitem *item = NULL, *is = NULL;
	size_t i;

	random_shuffle_array(values, ARRAY_SIZE(values));

	INIT_LIST_HEAD(&testlist);

	for(int j=0; j<ARRAY_SIZE(values); j++) {
		item = (struct listitem*) malloc(sizeof(*item));
		item->i = values[j];
		list_add(&item->list, &testlist);
	}
}
