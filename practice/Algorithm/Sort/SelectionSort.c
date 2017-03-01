/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include "common.h"

#define LEN 	15


void SelectionSort(int* num, int len);

int main()
{

	int num[LEN] = {5,7,1,9,8,2,1,4,6,0, 11, 13, -10,5,6};

	print(num, LEN);
	SelectionSort(num, LEN);
	print(num, LEN);

}


void SelectionSort(int* num, int len)
{
	int i, j;
	int min;
	for ( i = 0; i < len; i++) {
		min = i;
		for (j = i+1; j < len; j++) {
			if ( num[min] > num[j])
				min = j;
		}
		if (min != i)
			SWAP(num[min],num[i]);
	}
}
