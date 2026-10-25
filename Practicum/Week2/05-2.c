#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double n1, n2;
	scanf("%lf %lf", &n1, &n2);

	double sum = n1 + n2;

	n1 = sum - n1;
	n2 = sum - n2;

	printf("%g %g", n1, n2);

	return 0;
}