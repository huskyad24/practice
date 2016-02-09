#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int insertionSort(int ar_size, int *  ar) {
	int i,j,k=0;
	for(j = 2; j <= ar_size; j++) {
		int tmp = ar[j-1];
		for(i = j-1; i >= 0; i--) {
			if(ar[i-1] > tmp) {
				k++;
				ar[i] = ar[i-1];
			} else {
				ar[i] = tmp;
				break;
			}
		}
	}
	return k;
}

int main(void) {

	int _ar_size;
	scanf("%d", &_ar_size);
	int _ar[_ar_size], _ar_i;
	for(_ar_i = 0; _ar_i < _ar_size; _ar_i++)
		scanf("%d", &_ar[_ar_i]);

	printf("%d\n",insertionSort(_ar_size, _ar));
	return 0;
}

