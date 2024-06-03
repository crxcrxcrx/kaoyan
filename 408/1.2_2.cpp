#include <stdio.h>

void loveyou(int n) {
	int i = 1;
	while (i <= n) {
		i++;
		printf("I love You %d\n", i);
	}
	printf("I love you more Than %d\n", n);
}

int main() {
	loveyou(3000);
	return 0;
}