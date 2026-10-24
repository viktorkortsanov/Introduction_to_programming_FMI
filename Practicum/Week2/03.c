#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int discriminant = b * b - 4 * a * c;
	printf("%d", discriminant < 0);

	return 0;
}