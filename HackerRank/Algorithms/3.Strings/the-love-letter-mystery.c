/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int getANS()
{
    char p[10000];    
    scanf("%s",p);
    int len = strlen(p);
    
    int i,n=0;
    for(i=0;i<len/2;i++)
    {
        n+= abs(p[i]-p[len-i-1]);
    }
    return n;
}

int main() {

    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",getANS());
        
    }    
    return 0;
}

