#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int v,n,tmp;
	int i;

	scanf("%d",&v);
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&tmp);
		if(tmp == v) {
			printf("%d\n",i);
			break;
		}
	}

    return 0;
}

