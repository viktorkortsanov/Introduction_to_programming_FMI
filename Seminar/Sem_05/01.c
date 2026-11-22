#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int linearSearch(const int arr[], size_t size, int el) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == el) {
			return i;
		}
	}

	return -1;
}

int main() {
	int arr[] = { 17, 23, 5, -14, 0 };
	size_t size = sizeof(arr) / sizeof(int);
	int targetEl = -14;

	int result = linearSearch(arr, size, targetEl);

	if (result >= 0) {
		printf("%d", result);
	}
	else {
		printf("%d not found.", targetEl);
	}

	return 0;
}