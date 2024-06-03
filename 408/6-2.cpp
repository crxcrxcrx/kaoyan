#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	char *p;
	char *c;
	scanf("%d", &n);
	p = (char *)malloc(n);
	scanf("%c", &c);
	fgets(p, n, stdin);
	fputs(p, stdout);
}