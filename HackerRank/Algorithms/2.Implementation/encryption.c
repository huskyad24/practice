/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char p[82];
	unsigned long len;
	int r,i,j;

	scanf("%s",p);
	len = strlen(p);

	for(r=1;r<=9;r++)
		if(r*r >= len)
			break;

	for(i=0;i<r;i++)
	{
		for (j=0;j<r;j++)
		{
			if(i+j*r < len)
				printf("%c",p[i+j*r]);
		}
		printf(" ");
	}
	return 0;
}
