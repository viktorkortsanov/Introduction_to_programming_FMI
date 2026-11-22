#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findSubArrSumEqualToK(const int arr[], const size_t size, const int k) {
	for (int i = 0; i < size; i++) {
		int sum = 0;

		for (int j = i; j < size; j++) {
			sum += arr[j];

			if (sum == k) {
				return 1;
			}
		}
	}

	return 0;
}

int main() {
	int arr[] = { 17, 23, 5, -14, 0 };
	size_t size = sizeof(arr) / sizeof(int);
	int k = -9;

	findSubArrSumEqualToK(arr, size, k) ? printf("yes") : printf("no");

	return 0;
}