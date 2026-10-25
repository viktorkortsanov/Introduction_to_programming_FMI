#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int discriminant = b * b - 4 * a * c;

	if (discriminant > 0)
	{
		printf("2");
	}
	else if (discriminant == 0) {
		printf("1");
	}
	else {
		printf("0");
	}

	return 0;
}