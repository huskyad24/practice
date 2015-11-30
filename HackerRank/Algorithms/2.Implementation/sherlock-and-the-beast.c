/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate(long n, long *a3, long *a5) {
    *a3 = n/3;
    *a5 = n%3;

    if(*a5 == 1) {
        *a3 -= 3;
        *a5 = 2;
    } else if( *a5 == 2) {
        *a3 -= 1;
        *a5 = 1;
    }
}

int main() {
	long n,t;
	long i;
	long a3,a5;

	scanf("%ld",&t);

	while(t--) {

		scanf("%ld",&n);
		calculate(n, &a3, &a5);

		if(a3 >= 0 && a5 >=0) {
			for(i=0;i<a3;i++)
				printf("555");
			for(i=0;i<a5;i++)
				printf("33333");

		} else
			printf("-1");

		printf("\n");
	}
}
