/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	int tmp[61];
	int t,n;
	int i;
	tmp[0]=1;
	for(i =1;i<61;i++)
	{
		if(i%2==1)
			tmp[i]= tmp[i-1] *2;
		else
			tmp[i]= tmp[i-1] +1;
	}
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		printf("%d\n",tmp[n]);
		
	}

	return 0;
}
