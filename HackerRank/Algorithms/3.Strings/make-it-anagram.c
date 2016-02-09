/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int i,sum=0;
	char p1[10001];
	char p2[10001];
	int num[26]={};

	scanf("%s",p1);
	scanf("%s",p2);
	
	for(i=0;i<strlen(p1);i++)
	num[p1[i]-'a']++;

	for(i=0;i<strlen(p2);i++)
	num[p2[i]-'a']--;

	
	for(i=0;i<26;i++)
	sum += abs(num[i]);

	printf("%d\n",sum);
	return 0;
}
