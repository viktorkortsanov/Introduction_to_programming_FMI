#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned n;
	scanf("%u", &n);

	for (int i = 0; i < n; i++) {
		for (int k = n; k > i; k--) {
			printf(" ");
		}

		for (int j = n + i; j > n - i - 1; j--) {
			printf("*");
		}

		printf("\n");
	}

	for (int i = 0; i < n / 2; i++) {

		for (int j = 0; j < n; j++) {
			printf(" ");
		}

		printf("*");
		printf("\n");
	}

	return 0;
}