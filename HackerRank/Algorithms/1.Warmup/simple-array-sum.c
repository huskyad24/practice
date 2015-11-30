/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
	int sum;
	int n;
	int *arr;
	
	sum = 0;
	scanf("%d",&n);
	arr = (int *)malloc(sizeof(int)*n);
	for(int arr_i = 0; arr_i < n; arr_i++){
		scanf("%d",&arr[arr_i]);
		sum +=arr[arr_i];
	}
	printf("%d\n",sum);
	
	return 0;
}
