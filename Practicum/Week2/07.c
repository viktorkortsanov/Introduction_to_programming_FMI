#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int isTwoDigits = n >= 10 && n <= 99;
	int result = n * isTwoDigits + n % 10 * !isTwoDigits;

	printf("%d", result);

	return 0;
}