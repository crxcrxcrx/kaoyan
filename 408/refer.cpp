#include <stdio.h>
//c++����

void modify_num(int &b) { //�β�д&Ϊ����
	b = b + 1;
}

int main() {
	int a = 10;
	modify_num(a);
	printf("a = %d", a);
	return 0;
}
