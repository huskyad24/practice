/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long calculate(char *p,long i, long j) {
		while(j>i) {
			if(p[i] != p[j]) {
				return i;
			}
			i++;
			j--;
		}
		return -1;
}

int main() {

	unsigned int t;
	long n, len;
    char *p = (char *)malloc(100006);
    scanf("%d",&t);
	while(t--) {
		scanf("%s",p);
		len = strlen(p)-1;
		n = calculate(p,0,len);
		if(n != -1) {
			if(calculate(p,n+1, len - n) != -1)
			n = len - n;
		}
		printf("%ld\n",n);
	}
	free(p);
	return 0;
}
