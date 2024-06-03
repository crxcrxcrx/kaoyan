#include <stdio.h>

#define N 5

int main() {
	int a[N] = {1, 2, 3, 4, 5};
	int *p;
	p = a;
	int p1;
	p1 = sizeof(a) / sizeof(a[1]);
	p = &a[p1];
	printf("%d", p1);
	for (int i = 0; i < N  ; i++) {
		printf("%d", *(p - i - 1));//数组的最后一个索引是 N - 1
	}
}