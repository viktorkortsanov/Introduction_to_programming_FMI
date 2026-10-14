#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int expr1 = a + b;
	int expr2 = a - b;
	int result = expr1 * expr1 * expr1 * expr1 - expr2 * expr2;

	printf("%d", result);
}