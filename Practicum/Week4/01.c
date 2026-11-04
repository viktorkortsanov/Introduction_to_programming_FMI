#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	unsigned a, b;
	scanf("%u %u", &a, &b);

	for (int i = a + 1; i <= b; i++) {
		int divCount = 0;

		for (int j = 2; j < sqrt(i); j++) {
			if (i % j == 0) {
				divCount++;
				break;
			}
		}

		if (!divCount)
		{
			if (i < b - 1) {
				printf("%d, ", i);
			}
			else {
				printf("%d", i);
			}
		}
	}
}