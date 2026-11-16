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

int getCommonPostfixLength(int n1, int n2) {
	int postfixCount = 0;

	while (n1 > 0 && n2 > 0) {
		int digit1 = n1 % 10;
		int digit2 = n2 % 10;

		if (digit1 == digit2) {
			postfixCount++;
		}
		else {
			break;
		}

		n1 /= 10;
		n2 /= 10;
	}

	return postfixCount;
}
int getCommonPrefixLength(int n1, int n2) {
	int n1Reversed = reverseNum(n1);
	int n2Reversed = reverseNum(n2);
	int prefixCount = 0;

	while (n1Reversed > 0 && n2Reversed > 0) {
		int digit1 = n1Reversed % 10;
		int digit2 = n2Reversed % 10;

		if (digit1 == digit2) {
			prefixCount++;
		}
		else {
			break;
		}

		n1Reversed /= 10;
		n2Reversed /= 10;
	}

	return prefixCount;
}

int main() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);

	printf("Prefix %d / Postfix %d", getCommonPrefixLength(n1, n2), getCommonPostfixLength(n1, n2));

	return 0;
}