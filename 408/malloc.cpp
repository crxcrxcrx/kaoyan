#include <stdio.h>
#include <stdlib.h>//malloc head
#include <string.h>//str

int main() {
	int size;
	char *p;//
	scanf("%d", &size);
	p = (char *)malloc(size); //malloc返回void*，void*不能偏移需要强制转换
	strcpy(p, "malloc success");
	puts(p);
	free(p);//释放
	return 0;
}