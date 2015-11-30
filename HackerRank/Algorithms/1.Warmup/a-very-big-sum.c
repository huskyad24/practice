/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i,n;
	long long int sum = 0;
	long long int tmp = 0;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&tmp);
		sum += tmp;
	}
	printf("%lld\n",sum);

	return 0;
}
