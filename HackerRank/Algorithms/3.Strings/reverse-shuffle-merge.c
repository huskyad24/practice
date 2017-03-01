/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_possible(int remain_org[26], char * input, int pos, int input_len)
{
	int remain[26];
	int i = 0;
	memcpy(remain, remain_org, 26 * sizeof(int));

	for (i = pos; i<input_len; i++)
		remain[input[i]]--;

	for (i = 0;i<26;i++)
		if(remain[i]>0)
			return 0;

	return 1;
}

int recursive(char * input, char *ans, int input_len, int ans_len,
				int remain[26], int step, int pos)
{
	int ret, i, j;
	ans[step]='\0';
	if (step == ans_len) {
		for (i=0;i<step;i++)
			ans[i] += 'a';
		ans[step] = '\0';
		return 1;
	}

	for (i=0;i<26;i++) {
		if (remain[i] > 0) {
			remain[i]--;
			for (j = pos; j <= step + ans_len; j++) {
				if (!is_possible(remain, input, j + 1, input_len))
					break;
				if (i == input[j]) {
					ans[step] = i;
					ret = recursive(input, ans, input_len, ans_len, remain, step + 1, j + 1);
					if (ret == 1)
						return ret;
				}
			}
			remain[i]++;
		}
	}
	return 0;
}

int main() {

	int remain[26];
	int input_len;
	int ans_len;
	int i, j;
	char input[10001];
	char ans[5001];
	char tmp;


	for(i=0;i<26;i++)
		remain[i]=0;

	scanf("%s", input);
	input_len = strlen(input);
	ans_len = input_len / 2;
	for(i=0;i<ans_len;i++) {
		j = input_len-1-i;
		tmp = input[i] -'a';
		input[i] = input[j] - 'a';
		input[input_len-1-i] = tmp;
		remain[input[i]]++;
		remain[input[j]]++;
	}

	for(i=0;i<26;i++)
		remain[i] /= 2;

	recursive(input, ans, input_len, ans_len, remain, 0, 0);
	printf("%s\n", ans);

	return 0;
}

