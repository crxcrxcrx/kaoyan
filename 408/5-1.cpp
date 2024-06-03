#include <stdio.h>

int main() {
	int inp;
	int a[100];
	int ans = 0;
	scanf("%d", &inp);
	for (int i = 0; i < inp; i++) {//注意循环条件
		scanf("%d", &a[i]);
		if (a[i] == 2) {
			ans += 1;
		}
	}
	printf("%d", ans);
	return 0;
}