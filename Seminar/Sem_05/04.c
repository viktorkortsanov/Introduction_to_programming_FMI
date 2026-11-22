#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArr(const int arr[], const size_t size) {
	for (size_t i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void swap(int arr[], const size_t i, const size_t j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void convertArrToSaw(int arr[], const size_t size) {
	if (size < 3) {
		return;
	}

	int startsIncreasing = arr[0] < arr[1];

	for (size_t i = 1; i < size; i++) {

		if (startsIncreasing) {
			if (i % 2 == 1 && arr[i] < arr[i - 1]) {
				swap(arr, i, i - 1);
			}
			else if (i % 2 == 0 && arr[i] > arr[i - 1]) {
				swap(arr, i, i - 1);
			}
		}
		else {
			if (i % 2 == 1 && arr[i] > arr[i - 1]) {
				swap(arr, i, i - 1);
			}
			else if (i % 2 == 0 && arr[i] < arr[i - 1]) {
				swap(arr, i, i - 1);
			}
		}
	}
}

int main() {
	int arr[] = { 1, 5, 1, 0, 3 };
	size_t size = sizeof(arr) / sizeof(arr[0]);

	convertArrToSaw(arr, size);
	printArr(arr, size);

	return 0;
}
