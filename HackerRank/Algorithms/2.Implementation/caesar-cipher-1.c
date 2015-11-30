/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n,k;
	char *p;
	int i;

	scanf("%d",&n);
	p = (char *)malloc(sizeof(char)*(n+1));
	scanf("%s",p);
	scanf("%d",&k);

	for(i=0; i < strlen(p);i++)
	{
		if(p[i] >= 'a' && p[i] <='z')
		{
			p[i]-= 'a';
			p[i]+=k;
			p[i]%=26;
			p[i]+= 'a';
		}
		else if(p[i] >= 'A' && p[i] <='Z')
		{
			p[i]-= 'A';
			p[i]+=k;
			p[i]%=26;
			p[i]+= 'A';
		}
		
	}
	
	printf("%s",p);
	return 0;
}
