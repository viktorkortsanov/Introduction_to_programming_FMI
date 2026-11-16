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


int getLongestDigitSequence(int n) {
	int reversedNum = reverseNum(n);
	int longestLength = 1;
	int currentLongestLength = 1;

	while (n >= 10) {
		int digit1 = reversedNum % 10;
		reversedNum /= 10;
		int digit2 = reversedNum % 10;

		if (digit1 <= digit2) {
			currentLongestLength++;
		}
		else {
			currentLongestLength = 1;
		}

		if (currentLongestLength > longestLength) {
			longestLength = currentLongestLength;
		}

		n /= 10;
	}

	return longestLength;
}

int main() {
	int n;
	scanf("%d", &n);

	printf("%d", getLongestDigitSequence(n));

	return 0;
}