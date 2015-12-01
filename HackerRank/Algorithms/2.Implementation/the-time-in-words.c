/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char s[13][100]={
"twelve",
"one",
"two",
"three",
"four",
"five",
"six",
"seven",
"eight",
"nine",
"ten",
"eleven",
"twelve",
};

char p[31][100]={
"",
"one minute",
"two minutes",
"three minutes",
"four minutes",
"five minutes",
"six minutes",
"seven minutes",
"eight minutes",
"nine minutes",
"ten minutes",
"eleven minutes",
"twelve minutes",
"thirteen minutes",
"fourteen minutes",
"quarter",
"sixteen minutes",
"seventeen minutes",
"eighteen minutes",
"nineteen minutes",
"twenty minutes",
"twenty one",
"twenty two minutes",
"twenty three minutes",
"twenty four minutes",
"twenty five minutes",
"twenty six minutes",
"twenty seven minutes",
"twenty eight minutes",
"twenty nine minutes",
"half"
};

int main() {
    int h,m; 
	int to = 0;

    scanf("%d",&h);
    scanf("%d",&m);

	if( m == 0 ) {
		printf("%s o' clock\n",s[h]);
		return 1;
	} 

	if( m > 30) {
		to = 1;
		m = 60 - m;
		h++;
	}
	
	printf("%s %s %s\n",p[m],to?"to":"past",s[h]);
	return 1;
}
