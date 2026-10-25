#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned n;
	scanf("%u", &n);

	unsigned lastDigit = n % 10;
	n /= 10;

	unsigned secondDigit = n % 10;
	n /= 10;

	int includesSeven = lastDigit == 7 || secondDigit == 7 || n == 7;
	printf("%d", includesSeven);

	return 0;
}