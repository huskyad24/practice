/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int d_s,m_s,y_s;
	int d_e,m_e,y_e;
	scanf("%d %d %d\n",&d_e,&m_e,&y_e);
	scanf("%d %d %d\n",&d_s,&m_s,&y_s);
	
	y_e -= y_s;
	m_e -= m_s;
	d_e -= d_s;
	
	if(y_e > 0)
		printf("10000");
	else if(y_e == 0 && m_e > 0)
		printf("%d",m_e*500);
	else if(y_e == 0 && m_e == 0 && d_e>0)
		printf("%d",d_e*15);
	else
		printf("0");

	return 0;
}
