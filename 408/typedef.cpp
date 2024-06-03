#include <stdio.h>

//stu 等价于struct student，pstu等价于struct student*
typedef struct student {
	int num;
	char name[20];
	char sex;
} stu, *pstu;

typedef int INTENGE;//typedef起别名

int main() {
	stu s = {1001, "wangle", 'M'};
	stu *p = &s;
	pstu p1 = &s;
	INTENGE num = 10;
	printf("num=%d,p->num=%d", num, p->num);
	return 0;
}