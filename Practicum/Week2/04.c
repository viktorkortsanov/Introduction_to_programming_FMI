#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1, n2, n3, n4;
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	double q = (double)n2 / n1;
	int result = (n3 == n2 * q) && (n4 == n3 * q);
	printf("%d", result);

	return 0;
}