#include <stdio.h>

int main() {
	int total = 0; // ³õÊ¼»¯Îª0
	for (int s = 1; s <= 10; s++) {
		for (int w = 1; w <= 20; w++) {
			for (int e = 1; e <= 40; e++) {
				for (int y = 1; y <= 40; y++) {
					if (s + w + e + y == 40 && 10 * s + 5 * w + 2 * e + y == 100) {
						total += 1;
					}
				}
			}
		}
	}
	printf("%d", total);
}
