/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i,j,n;
	char *p, *p2;
	
	scanf("%d",&n);
	p = malloc(sizeof(char)*n*n);
	p2 = malloc(sizeof(char)*n*n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s",&p[i*n]);
		for(j=0;j<n;j++)
			p2[i*n+j] = p[i*n+j];
	}
	
	for(i=1;i<n-1;i++)
		for(j=1;j<n-1;j++)
			if(p[i*n+j] > p[i*n+j+1]   && p[i*n+j] > p[i*n+j-1] &&
			   p[i*n+j] > p[(i+1)*n+j] && p[i*n+j] > p[(i-1)*n+j] )
				p2[i*n+j]='X';
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%c",p2[i*n+j]);
		printf("\n");
	}
	
	return 0;
}
