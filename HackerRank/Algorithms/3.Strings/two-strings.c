/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

unsigned long calculate(char *p, unsigned long len) {
	unsigned long i,n = 0;	

	for(i=0;i<len;i++)
		n |= 1 << (p[i]-'a');
	return n;
}

int main() {

	int t;
	unsigned long n_a,n_b;
	unsigned long i;
	char *a =  (char *)malloc(100000);
	char *b =  (char *)malloc(100000);

	scanf("%d",&t);
	while(t--) {
		scanf("%s",a);
		scanf("%s",b);

		n_a = calculate(a,strlen(a));
		n_b = calculate(b,strlen(b));
		printf("%s\n",(n_a & n_b)?"YES":"NO");
	}

	free(a);
	free(b);

	return 0;
}
