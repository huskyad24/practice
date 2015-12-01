/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int search(int m_r, int m_c, char* m_ary, int p_r, int p_c, char* pattern) {
	int i,j,m,n;
	char *m_ptr, *p_ptr;

	int c_len = m_c - p_c;
	int r_len = m_r - p_r;
	char find = 0;	
	for (i=0;i<=r_len;i++) {
 		for (j=0;j<=c_len;j++) {
			find = 1;
			for (m=0;m<p_r;m++) {
				for (n=0;n<p_c;n++) {
					m_ptr = m_ary + (j+n) + (i+m) * m_c;
					p_ptr = pattern + n + m * p_c;
					if(*p_ptr != *m_ptr) {
						find = 0;
						break;
					}
				}
				if(!find)
				break;
			}
			if(find)
				return 1;
		}
	}
	return 0;
} 

int main() {
	int i;
	int t; 
	int m_r,m_c,p_r,p_c;
	char *m_ary;
	char *pattern;

	scanf("%d",&t);
	while(t--) {
		scanf("%d %d", &m_r, &m_c);
		m_ary = (char*)malloc(m_r*m_c*sizeof(char) + 1);
		for (i=0;i<m_r;i++)
			scanf("%s",m_ary+m_c*i);

		scanf("%d %d", &p_r, &p_c);
		pattern = (char*)malloc(p_r*p_c*sizeof(char) +1);
		for (i=0;i<p_r;i++)
			scanf("%s",pattern+p_c*i);

		i = search(m_r, m_c, m_ary, p_r, p_c, pattern);
		printf("%s\n", i?"YES":"NO");
		free(m_ary);
		free(pattern);
	}


    return 0;
}
