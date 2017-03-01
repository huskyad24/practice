/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include "common.h"

#define LEN 	15


void QuickSort(int* num, int left, int right);

int main()
{

	int num[LEN] = {5,7,1,9,8,2,1,4,6,0,11,13,-10,5,6};

	print(num, LEN);
	QuickSort(num, 0, LEN-1);
	print(num, LEN);

}

void QuickSort(int *num, int l, int r)
{
	if (l > r)
		return;

	int mid = num[(l+r)/2];
	int i = l-1;
	int j = r+1;

	while(1) {
		while(num[++i] < mid);	// l < mid
		while(num[--j] > mid);	// r > mid
		if (i >= j) break;
		SWAP(num[i], num[j]);
	}

	QuickSort(num, l, i-1);
	QuickSort(num, j+1, r);

}
