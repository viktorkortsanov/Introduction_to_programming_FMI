#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int containsEl(const int arr[], const size_t size, const int el) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == el) {
			return 1;
		}
	}

	return 0;
}

int areArraysOfSameSet(const int arr1[], const size_t size1, const int arr2[], const size_t size2) {
	for (size_t i = 0; i < size1; i++) {
		int currentEl = arr1[i];

		if (!containsEl(arr2, size2, currentEl)) {
			return 0;
		}
	}

	for (size_t i = 0; i < size2; i++) {
		int currentEl = arr2[i];

		if (!containsEl(arr1, size1, currentEl)) {
			return 0;
		}
	}

	return 1;
}

int main() {
	int arr1[] = { 1, 3, 4, 1, 3 };
	size_t size1 = sizeof(arr1) / sizeof(int);

	int arr2[] = { 1, 3, 3, 4, 1, 1, 3 };
	size_t size2 = sizeof(arr2) / sizeof(int);

	areArraysOfSameSet(arr1, size1, arr2, size2) ? printf("yes") : printf("no");

	return 0;
}