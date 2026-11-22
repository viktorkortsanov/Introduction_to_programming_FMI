#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int linearSearch(int arr[], int size, int el) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == el) {
			return i;
		}
	}
}

int main() {
	int arr[] = { 17, 23, 5, -14, 0 };
	int size = sizeof(arr) / sizeof(int);
	int el = -14;

	printf("%d", linearSearch(arr, size, el));

	return 0;
}