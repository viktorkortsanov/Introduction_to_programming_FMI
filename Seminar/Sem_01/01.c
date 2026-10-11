#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float n = 0;
	scanf("%f", &n);

	int isValidGrade = (n >= 2.00 && n <= 6.00);

	printf("%d", isValidGrade);

	return 0;
}