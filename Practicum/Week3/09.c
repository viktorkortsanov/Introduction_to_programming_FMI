#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double n1, n2, n3;
	scanf("%lf %lf %lf", &n1, &n2, &n3);

	if (n3 == n1 || n3 == n2) {
		printf("The number is on the boundary of the interval.");
	}
	else if (n3 > n1 && n3 < n2) {
		printf("The number is strictly inside the interval.");
	}
	else {
		printf("The number is outside the interval.");
	}

	return 0;
}