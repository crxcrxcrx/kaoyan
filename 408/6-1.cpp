#include <stdio.h>


void changer(int *j) {
	*j = *j / 2;
}

int main() {
	int i;
	scanf("%d", &i);
	changer(&i);
	printf("%d", i);
}