/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	unsigned long i,n,s,e;
	unsigned int t;
	unsigned int *p,tmp;
	scanf("%lu %u", &n, &t);

	p = (unsigned int *)malloc(sizeof(unsigned int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<t;i++)
	{
		scanf("%lu %lu", &s, &e);
		tmp = 3;

		for(;s <= e;s++)
		{
			if(p[s] < tmp)
				tmp = p[s];
		}
		printf("%d\n",tmp);
	}

	return 0;
}
