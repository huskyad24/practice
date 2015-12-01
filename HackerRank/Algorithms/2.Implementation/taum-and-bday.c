/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	unsigned long long x,y,z,w,b;
	unsigned long long z_x,z_y;
	int t;

	scanf("%d", &t);
	
	while(t--) {
		scanf("%llu %llu", &b, &w);
		scanf("%llu %llu %llu", &x, &y, &z);

		z_x = (y+z<x)?y+z:x;
		z_y = (x+z<y)?x+z:y;

		printf("%llu\n", z_x*b+z_y*w);
	}
}
