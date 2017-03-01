/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(char *p1, char *p2) {
	if( !(*p1) || (*p2 && (*p1 > *p2)))
		return 0;
		
	if( !(*p2) || (*p1 && (*p2 > *p1)))
		return 1;

	return -1;
}

void calculate(char *p1,char *p2) {
	char *t1,*t2;
	char k;
	while(*p1 != '\0' || *p2 !='\0') {

		k = min(p1,p2);
		if(k == -1) {
			t1 = p1+1;
			t2 = p2+1;
			while(*t1 != '\0' || *t2 != '\0') {
				k = min(t1,t2);
				if(k!=-1)
					break;
				t1++; 
				t2++;
			}
		}
		if(k) {
			k=*p1;
			while(*p1 == k) {
				printf("%c",*p1);
				p1++;
			}
		} else {
			k=*p2;
			while(*p2 == k) {
				printf("%c",*p2);
				p2++;
			}
		}
	}
	printf("\n");
}
int main() {

	unsigned int t;
    char *s1 = (char *)malloc(100001);
    char *s2 = (char *)malloc(100001);
    scanf("%d",&t);
	while(t--) {
		scanf("%s",s1);
		scanf("%s",s2);
		calculate(s1,s2);	
	}

	free(s1);
	free(s2);
}
