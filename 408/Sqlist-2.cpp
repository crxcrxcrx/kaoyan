#include <stdio.h>

#define Maxsize 50

typedef struct {
	int data[Maxsize];
	int len;
} Sqlist;

int main() {
	int x = 20;
	Sqlist S;
	S.len = 6; // Assuming initial length is 6
	int i = 4; // Assuming you want to insert x at index 3
	int j;

	// Initialize S.data with initial values
	for (j = 0; j < S.len; j++) {
		S.data[j] = j + 1; // Example initial values: 1, 2, 3, 4, 5, 6
	}
	//S.data = [1, 2, 3, 4, 5, 6]; //c不能直接赋值数组

	// Shift elements to the right to make space for x
	for (j = S.len; j >= i; j--) {
		S.data[j] = S.data[j - 1];
	}

	// Insert x at position i
	S.data[i - 1] = x;
	S.len++; // Increase the length of the list

	// Output the updated list
	printf("Updated list: ");
	for (j = 0; j < S.len; j++) {
		printf("%d ", S.data[j]);
	}
	printf("\n");

	return 0;
}
