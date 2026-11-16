#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int reverseNum(int n) {
	int reversedNum = 0;

	while (n > 0) {
		int digit = n % 10;
		reversedNum = reversedNum * 10 + digit;
		n /= 10;
	}

	return reversedNum;
}

int concatNums(int n1, int n2) {
	int n2Reversed = reverseNum(n2);

	while (n2Reversed > 0) {
		int digit = n2Reversed % 10;
		n1 = n1 * 10 + digit;
		n2Reversed /= 10;
	}

	return n1;
}

int main() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);

	printf("%d", concatNums(n1, n2));

	return 0;
}