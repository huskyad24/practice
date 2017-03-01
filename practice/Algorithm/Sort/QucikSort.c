/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include "common.h"

#define LEN 	15


void QuickSort(int* num, int len);
void QuickSort_re(int* num, int*tmpnum, int l, int r);

int main()
{

	int num[LEN] = {5,7,1,9,8,2,1,4,6,0, 11, 13, -10,5,6};

	print(num, LEN);
	QuickSort(num, LEN);
	print(num, LEN);

}


void QuickSort(int* num, int len) {
	int tmpnum[len];
	QuickSort_re(num, tmpnum, 0, len -1);
}

void QuickSort_re(int* num, int*tmpnum, int l, int r)
{
	if (l>=r)	return;

	int i, l_end = l, r_start =r, key = l;
	for (i = l+1; i <= r; i++) {
		if (num[key] > num[i]) tmpnum[l_end++] = num[i];
		else tmpnum[r_start--] = num[i];
	}
	tmpnum[l_end] = num[key];
	key = l_end;
	l_end--;
	r_start++;
	for (i=l;i<=r;i++)
	num[i] = tmpnum[i];

	QuickSort_re(num, tmpnum, l, l_end);
	QuickSort_re(num, tmpnum, r_start, r);
}
