/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char p[101];
	int i,n;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		p[i]=' ';
	p[n]='\0';
	for(i=n-1;i>=0;i--)
	{
		p[i]='#';
		printf("%s\n",p);
	}
	
	return 0;
}
