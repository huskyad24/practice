/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include "common.h"

#define LEN 	15


void InsertionSort(int* num, int len);

int main()
{

	int num[LEN] = {5,7,1,9,8,2,1,4,6,0, 11, 13, -10,5,6};

	print(num, LEN);
	InsertionSort(num, LEN);
	print(num, LEN);

}

void insert(int *num, int from, int to) {

	int tmp = num[from];
	int i;

	for (i=from;i>to;i--) {
		num[i] = num[i-1];
	}
	num[to] = tmp;
}

void InsertionSort(int* num, int len)
{
	int i, j;

	for ( i = 1; i < len; i++) {
		for (j=0;j<i;j++) {
			if (num[i] < num[j]) {
				insert(num,i,j);
				break;
			}
		}
	}
}
