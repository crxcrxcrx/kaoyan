#include <stdio.h>
#include <stdlib.h>//malloc head
#include <string.h>//str

int main() {
	int size;
	char *p;//
	scanf("%d", &size);
	p = (char *)malloc(size); //malloc����void*��void*����ƫ����Ҫǿ��ת��
	strcpy(p, "malloc success");
	puts(p);
	free(p);//�ͷ�
	return 0;
}