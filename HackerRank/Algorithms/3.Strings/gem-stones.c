/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int i,j,m=0;
    char p[102];
    char k1[26];
    char k2[26];
    
    for(i=0;i<26;i++)
	{
        k1[i]=0;
        k2[i]=0;    
    }
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<26;j++)
        k1[j]=0;
        scanf("%s",p);
        for(j=0;j<strlen(p);j++)
        {
            k1[p[j]-'a']++;
        }
        for(j=0;j<26;j++)
        {
            k2[j]+=(k1[j]>0)?1:0;
        }
    }
    
    for(i=0;i<26;i++)
    {
        if(k2[i]==n)
            m++;
    }
    printf("%d\n",m);
    
	return 0;
}
