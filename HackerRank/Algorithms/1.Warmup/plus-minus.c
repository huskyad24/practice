/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i,n,tmp;
	int num[3]={};
	double d;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&tmp);
		if(tmp > 0 ) num[0]++;
		else if(tmp < 0 ) num[1]++;
		else if(tmp == 0) num[2]++;
	}
	for(i=0;i<3;i++)
	{
		d=1.0*num[i]/n;
		printf("%0.3f\n",d);
	}
	return 0;
}
