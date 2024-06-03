#include <stdio.h>
#include <stdlib.h>

#define Maxsize 50
typedef int ElemType;

typedef struct {
	ElemType data[Maxsize];//规范写法
	int length;
} Sqlist;

//typedef struct {
//	int data[MaxSize];
//	int length;
//} Sqlist;

void List_insert(Sqlist &L, int pos, ElemType insert_value) {
	if (pos < 1 || pos > L.length + 1) {
		return;
	}
	if (L.length >= Maxsize) {
		return;
	}
	int j;
	for (j = L.length; j >= pos; j--) {
		L.data[j] = L.data[j - 1];
	}
	L.data[pos - 1] = insert_value;
	L.length++;
}

bool Delete_list(Sqlist &L, int del) {
	if (del < 1 || del > L.length + 1) {
		return false;
	}
	if (L.length >= Maxsize) {
		return false;
	}
	int i;
	for (i = del; i <= L.length; i++) {
		L.data[i - 1] = L.data[i];
	}
	L.length--;
	return true;
}

void print_list(Sqlist L) {
	for (int i = 0; i < L.length; i++) {
		printf("%3d", L.data[i]);
	}
	printf("\n");
}


int main() {
	Sqlist L;
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;
	ElemType insert_value;//规范写法
	//int insert_value;
	scanf("%d", &insert_value);

	List_insert(L, 2, insert_value);
	print_list(L);
	ElemType del;
	scanf("%d", &del);
	bool ret;
	ret = Delete_list(L, del);
	if (ret) {
		print_list(L);
	} else {
		printf("false");
	}


	return 0;
}
