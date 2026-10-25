#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double n1, n2;
	scanf("%lf %lf", &n1, &n2);

	int n1IsHigher = n1 > n2;
	int n2IsHigher = n2 > n1;
	double higherNum = n1IsHigher * n1 + n2 * n2IsHigher;

	printf("%g", higherNum);

	return 0;
}