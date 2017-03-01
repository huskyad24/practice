/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 	15

#define SWAP(a,b) {int tmp; tmp = a; a = b; b = tmp;}

void print(int* arr, int len);
void heapSort(int* num, int len);
int min(int* num, int len, int root);
int max(int* num, int len, int root);
void minHeapTree(int* num, int len);

int main()
{

	int num[LEN] = {5,7,8,9,3,2,1,4,6,0, 11, 13, -10,5,6};

	print(num, LEN);
	heapSort(num, LEN);
	print(num, LEN);

}


void heapSort(int* num, int len)
{
	int i;
	for (i = len-1; i >0; i--) {
		minHeapTree(num, i);
		print(num, LEN);
		SWAP(num[0], num[i]);
	}
}

void minHeapTree(int* num, int len)
{
	int i, root, m;
	for (i = len; i >= 1; i-=2) {
		root = (i-1)/2;
		m = max(num, len, root);
		if ( m != root)
			SWAP(num[root], num[m]);
	}
}

int min(int* num, int len, int root)
{
	int min = root;
	int l = root * 2 + 1;
	int r = l + 1;

	if ( l > len)
		return min;

	if (num[min] > num[l])
		min = l;

	if ( r > len)
		return min;

	if (num[min] > num[r])
		min = r;

	return min;
}

int max(int* num, int len, int root)
{
	int max = root;
	int l = root * 2 + 1;
	int r = l + 1;

	if ( l > len)
		return max;

	if (num[max] < num[l])
		max = l;

	if ( r > len)
		return max;

	if (num[max] < num[r])
		max = r;

	return max;
}



void print(int* arr, int len)
{
    int i;
    for(i = 0; i < len; i++)
		printf("%d ", arr[i]);
    printf("\n");
}
