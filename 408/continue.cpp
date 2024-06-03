#include <stdio.h>

int main() {
	int total = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			continue;
		}
		total += i;
	}
	printf("%d", total);
}