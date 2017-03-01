/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n = 1;
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    while(*s++ != '\0')
		if (*s >= 'A' && *s <= 'Z')
			n++;
	printf("%d\n", n);
	return 0;
}
