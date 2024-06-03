#include <stdio.h>

int main() {
	int i = 10;
	float f = 96.3;
	printf("student number=%3d score=%5.2f\n", i, f);
	printf("student number=%-3d score=%5.2f\n", i, f);
	//默认右对齐，加-号左对齐
}