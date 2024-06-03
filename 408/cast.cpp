#include <stdio.h>

//强制类型转换
int main() {
	int i = 5;
	float f = i / 2; //做整型运算，左右操作数都为整型
	float k = (float)i / 2 ;
	printf("%f\n", f);
	printf("%f\n", k);
}