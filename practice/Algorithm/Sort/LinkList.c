/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include "common.h"

#define LEN 100

struct link{
	int val;
	struct link *next;
};


int main() {


	struct link *head = NULL;
	struct link *now = NULL;

	int i;
	for (i=0;i<LEN;i++)
	{
		struct link * node = (struct link*) malloc(sizeof(struct link));
		node->val = i;
		node->next = NULL;

		if (head == NULL)
			head = node;

		if (now != NULL)
			now->next = node;
		now = node;
	}


	for (now = head; now != NULL; now = now->next) {
		printf("%d\n", now->val);
	}
}
