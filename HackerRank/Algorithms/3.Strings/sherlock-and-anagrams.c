/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int compare(char *p1, char *p2, int len) {
	int i;
	int num[256]={};

	for(i=0;i<len;i++) {
		num[*(p1+i)]++;
		num[*(p2+i)]--;
	}

	for(i=0;i<256;i++)
		if(num[i]!=0)
			return 0;

	return 1;
}

int anagrams(char *p) {

	int i,j,k;
	int len = strlen(p);
	int sum =0;

	for(i=1;i<len;i++)
		for(j=0;j+i<=len;j++)
			for(k=j+1;k+i<=len;k++) {
				sum += compare(p+j, p+k, i);				
			}
	return sum;
}
int main() {

	int t;
	char p[101];

	scanf("%d",&t);
	while(t--) {
		scanf("%s",p);
		printf("%d\n",anagrams(p));
	}
	return 0;

}
