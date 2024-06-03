#include <stdio.h>

int main() {
	int coins[] = {1, 2, 5, 10, 20, 50};
	int n = sizeof(coins) / sizeof(coins[0]);
	printf("%d", n);
}