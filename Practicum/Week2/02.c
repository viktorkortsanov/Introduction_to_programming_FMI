#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double grade;
	scanf("%lf", &grade);

	int isValidGrade = grade >= 2 && grade <= 6;
	printf("%d", isValidGrade);

	return 0;
}