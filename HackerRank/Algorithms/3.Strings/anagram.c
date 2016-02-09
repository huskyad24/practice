/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculate(char *p) {

	int i;
	int num1[26]={};
	int num2[26]={};
	int len, sum = 0;

	len = strlen(p);
	if(len % 2)
		return -1;

	len/=2;

	for(i=0;i<len;i++) {
		num1[p[i]-'a']++;
		num2[p[i+len]-'a']++;
	}

	for(i=0;i<26;i++)
		sum+=abs(num1[i]-num2[i]);

	sum/=2;
	return sum;
}
int main() {

	char p[10000];
	int t;
	scanf("%d",&t);
	while(t--) {
		scanf("%s",p);
		printf("%d\n",calculate(p));
	}

	return 0;
}
