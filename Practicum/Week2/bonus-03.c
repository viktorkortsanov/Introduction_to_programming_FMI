#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned n;
	scanf("%u", &n);

	int isOneDigit = n <= 9;
	int isTwoDigits = n >= 10 && n <= 99;
	int isOther = !isOneDigit && !isTwoDigits;

	unsigned result = n * isOneDigit + (n % 10 + 1) * isTwoDigits + (n / 10) * isOther;
	printf("%u", result);

	return 0;
}