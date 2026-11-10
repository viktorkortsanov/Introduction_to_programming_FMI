#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sortNum(int n) {

	int sortedNum = 0;

	for (int i = 1; i <= 9; i++) {
		int nCopy = n;

		while (nCopy > 0) {
			int digit = nCopy % 10;

			if (digit == i) {
				sortedNum = sortedNum * 10 + digit;
			}

			nCopy /= 10;
		}
	}

	return sortedNum;
}

int main() {
	unsigned n;
	scanf("%d", &n);

	int sortedNum = sortNum(n);
	printf("%d", sortedNum);

	return 0;
}