#include <stdio.h>
#include <stdlib.h>

void change(char *&p) {
	p = (char *)malloc(100);
	fgets(p, 100, stdin);
	fputs(p, stdout);
	free(p);
}

int main() {
	char *p;
	change(p);
	return 0;
}