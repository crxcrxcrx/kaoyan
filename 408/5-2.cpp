#include <stdio.h>
#include <string.h>

int main() {
	char c[100], d[100] = {0}; //初始化才有结束符
	gets(c);
	int length = strlen(c);
	int i, j;
	char temp;
	// 反转
	for (i = 0, j = length - 1; i < strlen(c); i++, j--) {
		d[j] = c[i];
	}



	int result = strcmp(c, d);
	//printf("%s", d);
	if (result < 0) {
		printf("-1\n");
	} else if (result > 0) {
		printf("1\n");
	} else {
		printf("0\n");
	}

	return 0;
}
