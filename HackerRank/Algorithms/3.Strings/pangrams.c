/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	long num[26]={};
	char buffer[1000];
	int len, i, pangram;

	fgets(buffer, sizeof(buffer), stdin);

	len = strlen(buffer);
	for(i=0;i<len;i++) {
		if(buffer[i] >= 65 && buffer[i] <= 90)
			num[buffer[i]-65]++;
		else if(buffer[i] >= 97 && buffer[i] <= 122)
			num[buffer[i]-97]++;
	}

	pangram = 1;	
	for(i=0;i<26;i++) {
		if(num[i] == 0) {
			pangram = 0;
			break;
		}
	}

	printf("%s\n",pangram?"pangram":"not pangram");
	

	return 0;
}
