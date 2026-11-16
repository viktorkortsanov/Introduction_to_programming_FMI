#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sortNumInAscendingOrder(int n) {
	int sortedNum = 0;

	for (int i = 1; i <= 9; i++) {
		int temp = n;

		while (temp > 0) {
			int digit = temp % 10;

			if (digit == i) {
				sortedNum = sortedNum * 10 + digit;
			}

			temp /= 10;
		}
	}

	return sortedNum;
}

int sortNumInDescendingOrder(int n) {
	int sortedNum = 0;

	for (int i = 9; i >= 1; i--) {
		int temp = n;

		while (temp > 0) {
			int digit = temp % 10;

			if (digit == i) {
				sortedNum = sortedNum * 10 + digit;
			}

			temp /= 10;
		}
	}

	return sortedNum;
}

int isSorted(int n) {

	if (sortNumInAscendingOrder(n) == n || sortNumInDescendingOrder(n) == n) {
		return 1;
	}

	return 0;
}

int main() {
	int n;
	scanf("%d", &n);

	isSorted(n) ? printf("true") : printf("false");

	return 0;
}