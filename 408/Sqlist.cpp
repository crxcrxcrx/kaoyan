#include <stdio.h>

#define MaxSize 50
typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int length;
} Sqlist;

//L��� ��Ҫ����
bool ListInsert(Sqlist &L, int pos, ElemType element) {
	//�жϲ����Ƿ�Ϸ�
	if (i < 1 || i > L.length + 1) {
		return false;
	}
	if (L.length == Maxsize) {
		return false;
	}
}

int main() {
	Sqlist L;
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;

	return 0;
}