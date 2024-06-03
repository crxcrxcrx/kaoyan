#include <stdio.h>

struct student {
	int num;
	char name[20];
	char sex;
};

int main() {
	struct student s = {1001, "cnm", 'M'};
	struct student sarr[3] = {1001, "cnm", 'M', 1002, "mmp", 'M', 1003, "cmm", 'M'};
	struct student *p;
	p = sarr;
//	printf("%d %s %c\n", (*p).num, (*p).name, (*p).sex);
//	printf("%d %s %c\n", p->num, p->name, p->sex);
	int n;
	n = sizeof(sarr) / sizeof(sarr[0]);
	for (int i = 0; i < n; i++) {

		printf("%d %s %c\n", p->num, p->name, p->sex);
		p++;
	}
	return 0;
};
