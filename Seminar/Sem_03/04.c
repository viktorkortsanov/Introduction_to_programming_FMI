#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned n;
	scanf("%u", &n);

	int nCopy = n;
	int reversedNum = 0;

	while (nCopy > 0) {
		int digit = nCopy % 10;
		reversedNum = reversedNum * 10 + digit;

		nCopy /= 10;
	}

	int isPalindrome = n == reversedNum;
	printf("%d", isPalindrome);

	return 0;
}