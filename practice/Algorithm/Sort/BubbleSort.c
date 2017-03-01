/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include "common.h"

#define LEN 	15


void BubbleSort(int* num, int len);

int main()
{

	int num[LEN] = {5,7,1,9,8,2,1,4,6,0, 11, 13, -10,5,6};

	print(num, LEN);
	BubbleSort(num, LEN);
	print(num, LEN);

}


void BubbleSort(int* num, int len)
{
	int i, j;

	for ( i = 1; i < len; i++) {
		for (j = 0; j < len-i; j++) {
			if(num[j] > num[j+1]) {
				SWAP(num[j],num[j+1]);
			}
		}
		print(num, LEN);
	}
}
