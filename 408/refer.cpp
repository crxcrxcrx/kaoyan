#include <stdio.h>
//c++引用

void modify_num(int &b) { //形参写&为引用
	b = b + 1;
}

int main() {
	int a = 10;
	modify_num(a);
	printf("a = %d", a);
	return 0;
}
