#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);

	int sum = (n * (n + 1)) / 2;
	printf("%d", sum);

	return 0;
}