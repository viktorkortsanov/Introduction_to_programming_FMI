#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int k = n / 3;
	int sum = 3 * k * (k + 1) / 2;

	printf("%d", sum);

	return 0;
}