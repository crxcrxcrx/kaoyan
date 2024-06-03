#include <stdio.h>

#define MaxSize 50
typedef int ElmeType;

typedef struct {
	ElmeType data[MaxSize];
	int length;
} Sqlist;


//≤Â»Î
bool Listinsert(Sqlist &L, int i, ElmeType element) {
	if (i < 1 || i > L.length + 1) {
		return false;
	}
	if (L.length == MaxSize) {
		return false;
	}
	for (int j = L.length; j >= i; j--) {
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = element;
	L.length++;
	return true;
}

//¥Ú”°
void printfL(Sqlist L) {
	for (int i = 0; i < L.length; i++) {
		printf("%3d", L.data[i]);
	}
	printf("\n");
}


//…æ≥˝
bool ListDelete(Sqlist &L, int i, ElmeType &del) {
	if (i < 1 || i > L.length) {
		return false;
	}
	del = L.data[i - 1];
	int j;
	for (j = j - 1; j < L.length - 1; j++) {
		L.data[j] = L.data[j + 1];
	}
	L.length--;
	return true;
}


//≤È—Ø‘™Àÿ
int LocatElem(Sqlist L, ElmeType element) {
	int i;
	for (i = 0; i < L.length; i++) {
		if (element == L.data[i]) {
			return i + 1;
		}
	}
	return 0;
}

int main() {
	Sqlist L;
	bool ret;
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;


	ret = Listinsert(L, 2, 60);
	if (ret) {
		printf("insert success\n");
		printfL(L);
	} else {
		printf("insert failed\n");
	}


	ElmeType del;
	ret = ListDelete(L, 1, del);
	if (ret) {
		printf("Delete success\n");
		printf("Delete element is =%d\n", del);
		printfL(L);
	} else {
		printf("Delete failed\n");
	}


	int pos; //¥Ê¥¢‘™ÀÿŒª÷√
	pos = LocatElem(L, 60);
	if (pos) {
		printf("find element\n");
	} else {
		printf("not find element\n");
	}
	return 0;
}
