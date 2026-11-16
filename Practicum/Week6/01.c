#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sortNum(int n) {
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

int isPermutation(int n1, int n2) {
	int n1Sorted = sortNum(n1);
	int n2Sorted = sortNum(n2);

	if (n1Sorted == n2Sorted) {
		return 1;
	}

	return 0;
}

int main() {
	isPermutation(352953, 295335) ? printf("true") : printf("false");

	return 0;
}