/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int t,i,len;
	char p[10000];
	char fun;

	scanf("%d",&t);
	while(t--) {
		fun = 1;
		scanf("%s",p);
		len = strlen(p) -1;
		for(i=0;i<len;i++) {
			p[i] -=p[i+1];	
			p[i] = abs(p[i]);
		}
		for(i=0;i<len/2;i++) {
			if(p[i] != p[len-i-1]) {
				fun = 0;
				break;
			}
		}
		printf("%s\n",fun?"Funny":"Not Funny");
	}
	return 0;
}
