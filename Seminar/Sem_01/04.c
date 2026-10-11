#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);

	int digit1 = "";
	int digit2 = "";
	int digit3 = "";

	digit1 = n % 10;
	n = n / 10;

	digit2 = n % 10;
	n = n / 10;

	digit3 = n % 10;

	int reversedNum = digit1 * 100 + digit2 * 10 + digit3 + 1;

	printf("%d", reversedNum);
	return 0;
}