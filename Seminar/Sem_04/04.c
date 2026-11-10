#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned reverseNum(unsigned n) {
	int reversedNum = 0;

	while (n > 0) {
		reversedNum = reversedNum * 10 + n % 10;
		n /= 10;
	}

	return reversedNum;
}

unsigned getLongestSequence(unsigned reversedNum) {
	int longestSequence = 0;
	int currentLongestSequence = 0;

	while (reversedNum > 0) {
		int digit1 = reversedNum % 10;
		reversedNum /= 10;
		int digit2 = reversedNum % 10;

		currentLongestSequence = currentLongestSequence * 10 + digit1;

		if (digit1 >= digit2 || reversedNum == 0) {
			if (getLength(currentLongestSequence) > getLength(longestSequence)) {
				longestSequence = currentLongestSequence;
			}

			currentLongestSequence = 0;
		}
	}

	return longestSequence;
}

unsigned getLength(unsigned n) {
	int length = 0;

	while (n > 0) {
		length++;
		n /= 10;
	}

	return length;
}

int main() {
	unsigned n;
	scanf("%u", &n);

	unsigned reversedNum = reverseNum(n);
	unsigned longestSequence = getLongestSequence(reversedNum);
	unsigned longestSequenceLength = getLength(longestSequence);

	printf("%u (%u)", longestSequenceLength, longestSequence);

	return 0;
}