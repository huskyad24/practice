/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i,j,n;
	int tmp,sum1=0,sum2=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%d",&tmp);
			if(i == j)
				sum1+=tmp;
			if(i == n-j-1)
				sum2+=tmp;
		}
	}
	sum1 = abs(sum1-sum2);
	printf("%d\n",sum1);
	return 0;
}
