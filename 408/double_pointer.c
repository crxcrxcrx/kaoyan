#include <stdio.h>

void modify(int **p, int *q) {//一级指针要用二级指针去接
	*p = q;
}

int main() {
	int *p = NULL;
	int i = 10;
	int *q = &i;
	modify(&p, q);
	printf("p = %d,q = %d", *p);
	return 0;
}