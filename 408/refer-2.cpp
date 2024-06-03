#include <stdio.h>

void modify(int *&p, int *&q) {
	p = q;
}

int main() {
	int *p = NULL;
	int i = 10;
	int *q = &i;
	modify(p, q);
	printf("p = %d,q = %d", *p, *q);
	return 0;
}