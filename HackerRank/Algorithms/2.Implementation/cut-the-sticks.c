/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int tmp[1000];
	int n,i;
	int min = 1000;
	int sum=0;
	int over =0;

	scanf("%d",&n);
	
	for(i =0;i<n;i++)
		scanf("%d",&tmp[i]);
	
	while(1)
	{
		over = 1;
		sum =0;
		min = 1000;
		for(i =0;i<n;i++)
			if(min > tmp[i] && tmp[i] !=0) min=tmp[i];
		
		for(i =0;i<n;i++)
			if(tmp[i] !=0)
			{
				tmp[i]-=min;
				sum++;
			}
		printf("%d\n",sum);
		
		for(i =0;i<n;i++)
			if(tmp[i] !=0)
			{
				over =0;
			}
		if(over)
			break;
	}
	return 0;
}
