#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findSmallestMissingElement(const int sortedArr[], size_t size) {
	int low = 0;
	int high = size - 1;

	while (low < high) {
		int mid = low + (high - low) / 2;
		int midEl = sortedArr[mid];

		if (midEl == mid) {
			low = mid + 1;
		}
		else {
			high = mid;
		}
	}

	return low;
}

int main() {
	int sortedArr[] = { 0, 1, 3, 4, 5, 6, 7, 8, 10 };
	size_t size = sizeof(sortedArr) / sizeof(int);

	int result = findSmallestMissingElement(sortedArr, size);

	printf("%d", result);

	return 0;
}
