#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int k = n - i; k > 0; k--) {
			printf(" ");
		}

		for (int j = i; j >= 1; j--) {
			printf("%d", j);
		}

		printf("\n");
	}

	for (int i = n - 1; i >= 1; i--) {
		for (int k = n - i; k > 0; k--) {
			printf(" ");
		}

		for (int j = i; j >= 1; j--) {
			printf("%d", j);
		}

		printf("\n");
	}
}