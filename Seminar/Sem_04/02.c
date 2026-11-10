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
	int result = n1;

	while (n2 > 0) {
		int digit = n2 % 10;
		result = result * 10 + digit;
		n2 /= 10;
	}

	return result;
}


int main() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);

	int result = concatNums(n1, reverseNum(n2));
	printf("%d", result);

	return 0;
}