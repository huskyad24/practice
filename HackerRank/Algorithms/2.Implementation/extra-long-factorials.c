/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n;
	unsigned int p[200]={};
	int i,j;
	p[0] = 1;

	char a =0;
	scanf("%d",&n);
	for(i=1;i <=n;i++)
	{
		a=0;
		for(j=0;j<200;j++)
			p[j]*=i;
		for(j=0;j<200;j++)
			if(p[j] > 10)
			{
				p[j+1] += p[j] / 10;
				p[j] %= 10;
			}
	}
	for(j=199;j>=0;j--)
	{
		if(!a && p[j]!=0)
			a =1;
		
		if(a)
			printf("%d",p[j]);
	}
	return 0;
}
