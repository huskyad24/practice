/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,i,n,j;
    char *p = (char *)malloc(100000);
    scanf("%d",&t);
    
    for(j=0;j<t;j++)
    {
        n=0;
        scanf("%s",p);
        for(i =1;i<strlen(p);i++)
        {
            if(p[i]==p[i-1])
            n++;
        }
        printf("%d\n",n);
    }

	free(p);
    return 0;
}
