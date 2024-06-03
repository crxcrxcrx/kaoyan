#include <stdio.h>

#define PI 3+2

int main() {
	int i = PI * 2; // == 3 + 2 * 2
	printf("i=%d\n", i);
	printf("i size=%d\n", sizeof(i));
	float f = 3e-3;
	printf("f = %f\n", f);
	char c = 'A';
	printf("char is %c ,char c asci= %d ,shift c = %c\n", c, c, c + 32);//´óÐ¡Ð´×ª»»
}
