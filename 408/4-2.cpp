#include <stdio.h>

int main() {
	int n = 0;
	int fa = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n ; i++) {
		fa *= i;
//		printf("for in is %d\n", fa);
//		printf("for in is %d\n", i);
	}
	printf("%d", fa);
}