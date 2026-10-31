#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned n, k;
	scanf("%u %u", &n, &k);

	int kCopy = k;
	int divisor = 1;
	int isInfix = 0;

	do {
		divisor *= 10;
		kCopy /= 10;
	} while (kCopy > 0);

	while (n > 0) {
		if (n % divisor == k) {
			isInfix = 1;
			break;
		}

		n /= 10;
	}

	isInfix ? printf("yes") : printf("no");

	return 0;
}