#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned n;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		for (int k = 0; k < n - i; k++) {
			printf(" ");
		}

		for (int j = 0; j < i * 2 + 1; j++) {
			printf("*");
		}

		printf("\n");
	}

	for (int i = 0; i < n + 1; i++) {
		for (int k = 0; k < n - i; k++) {
			printf(" ");
		}

		for (int j = 0; j < i * 2 + 1; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}