#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double n1, n2;
	scanf("%lf %lf", &n1, &n2);

	double temp = n1;
	n1 = n2;
	n2 = temp;

	printf("%g %g", n1, n2);

	return 0;
}