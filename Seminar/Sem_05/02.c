#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binarySearch(const int sortedArr[], size_t size, int targetEl) {
	int low = 0;
	int high = size - 1;

	while (low < high) {
		int mid = low + (high - low) / 2;
		int midEl = sortedArr[mid];

		if (midEl < targetEl) {
			low = mid + 1;
		}
		else if (midEl > targetEl) {
			high = mid - 1;
		}
		else {
			return mid;
		}
	}

	return -1;
}

int main() {
	int sortedArr[] = { -8, 5, 22, 23, 44, 100 };
	size_t size = sizeof(sortedArr) / sizeof(int);
	int targetEl = -8;

	int result = binarySearch(sortedArr, size, targetEl);

	if (result >= 0) {
		printf("%d", result);
	}
	else {
		printf("%d not found.", targetEl);
	}

	return 0;
}