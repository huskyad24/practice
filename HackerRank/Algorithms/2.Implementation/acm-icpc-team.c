/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

static unsigned long *cmp_data;
int p_len;

void push(unsigned long *p,unsigned char data)
{
	int i;
	int n = sizeof(unsigned long)*8-1;
	for (i = p_len -1; i > 0 ; i--) {
		p[i] = p[i] << 1 | ((p[i-1] >> n) & 0x01);
	}
	p[0] = p[0] << 1 | (data & 0x01);
}

int count(unsigned long *p1, unsigned long *p2)
{
	int num=0;
	unsigned long i;
	for (i=0; i<p_len; i++) {
		cmp_data[i] = p1[i] | p2[i];
		while (cmp_data[i]) {
			num += (cmp_data[i] & 0x01);
			cmp_data[i] = cmp_data[i] >> 1;
		}
	}
	return num;
}

int main() {
	int max =0;
	int i,j,k;
	int n, m;
	int *count_ary;
	unsigned long *p_data;
	unsigned long **p;
	char *tmp;
	
	scanf("%d %d",&n,&m);
	
	p_len = (m/(sizeof(unsigned long)*8)+1);
	
	tmp = (char *)malloc(sizeof(char)*(m+1));
	count_ary = (int *)malloc(sizeof(int)* n * (n-1));
	p_data = (unsigned long *)malloc(sizeof(unsigned long) * n * p_len);
	p = (unsigned long **)malloc(sizeof(unsigned long *) * n);
	cmp_data = (unsigned long *)malloc(sizeof(unsigned long) * p_len);
	
	memset(count_ary, 0, sizeof(int)* n * (n-1));
	memset(p_data, 0, sizeof(unsigned long) * n * p_len);
	
	for (i=0; i<n; i++) {
		p[i] = &p_data[i*p_len];
	}
	
	for (i = 0; i < n; i++) {
		scanf("%s",tmp);
		for (j=0; j < m; j++) {
			push(&p[i][0],tmp[j]);
		}
	}
	
	k=0;
	for (i=0;i<n; i++) {
		for (j=i+1; j<n; j++) {
			count_ary[k] = count(p[i],p[j]);
			if(count_ary[k] > max)
				max = count_ary[k];
			k++;
		}
	}
	n=0;
	for (i = 0; i < k; i++) {
		if(count_ary[i] == max)
			n++;
	}
	printf("%d\n",max);
	printf("%d\n",n);
	
	
	free(cmp_data);
	free(p);
	free(p_data);
	free(count_ary);
	free(tmp);
	
	return 0;
}
