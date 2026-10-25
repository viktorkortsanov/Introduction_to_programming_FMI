#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int lastDigit = n % 10;
	n /= 10;

	int secondDigit = n % 10;
	n /= 10;

	int reversedNum = lastDigit * 100 + secondDigit * 10 + n + 1;
	printf("%d", reversedNum);

	return 0;
}