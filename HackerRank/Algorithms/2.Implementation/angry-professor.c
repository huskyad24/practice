/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int t,n,k;
	int i,j;
	int s_n,tmp;

	scanf("%d",&t);
	for(i=0;i<t;i++) {
		s_n = 0;
		scanf("%d %d", &n, &k);
		for(j=0;j<n;j++)
		{
			scanf("%d",&tmp);
			if(tmp<=0)
				s_n++;
		}
		if(s_n >= k)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
