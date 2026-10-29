#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	unsigned a, b;
	scanf("%u %u", &a, &b);

	for (int i = a + 1; i < b; i++) {
		int divisorCount = 2;
		int iSqrt = sqrt(i);

		for (int j = 2; j <= iSqrt; j++) {

			if (i % j == 0) {
				divisorCount++;
				break;
			}
		}

		if (divisorCount == 2) {
			printf("%d ", i);
		}
	}

	return 0;
}