/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int h,m,s;
	char ap[3];
	
	scanf("%d:%d:%d%s",&h,&m,&s,ap);
	if(h == 12 || h == 0)
	{
		if(ap[0] == 'A' || ap[0] == 'a' )
			h = 0;
		else
			h = 12;
	}
	else if(ap[0] == 'P' || ap[0] == 'p')
		h+=12;
	
	printf("%02d:%02d:%02d",h,m,s);
	return 0;
}
