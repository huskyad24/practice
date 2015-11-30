/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	unsigned long long int n,n2;
	int t;

	scanf("%d",&t);
	while(t--)
	{
		int tmp, sum =0;
		scanf("%llu", &n);
		n2 =n;
		do{
			tmp = n2%10;
			if(tmp != 0 && n%tmp == 0)
				sum++;
			n2/=10;
		}while(n2>0);
		printf("%d\n",sum);
	}
	return 0;
}
