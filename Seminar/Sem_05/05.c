#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSubArr(const int arr[], const int startIdx, const int endIdx) {
	printf("%d %d (", startIdx, endIdx);

	for (int i = startIdx; i <= endIdx; i++) {
		if (i == endIdx) {
			printf("%d)", arr[i]);
		}
		else {
			printf("%d ", arr[i]);
		}
	}
}

void findLongestSequence(const int arr[], const size_t size) {
	if (size == 0) {
		return;
	}

	int startIdx = 0;
	int endIdx = 0;

	int longestStartIdx = 0;
	int longestEndIdx = 0;

	for (size_t i = 0; i + 1 < size; i++) {
		if (arr[i] == arr[i + 1]) {
			endIdx++;
		}
		else {
			if (endIdx - startIdx > longestEndIdx - longestStartIdx) {
				longestStartIdx = startIdx;
				longestEndIdx = endIdx;
			}

			startIdx = i + 1;
			endIdx = startIdx;
		}
	}

	if (endIdx - startIdx > longestEndIdx - longestStartIdx) {
		longestStartIdx = startIdx;
		longestEndIdx = endIdx;
	}

	printSubArr(arr, longestStartIdx, longestEndIdx);
}

int main() {
	int arr[] = { -8, 22, 22, 22, 44, 44, -8, 100, -8, -8 };
	size_t size = sizeof(arr) / sizeof(int);

	findLongestSequence(arr, size);

	return 0;
}