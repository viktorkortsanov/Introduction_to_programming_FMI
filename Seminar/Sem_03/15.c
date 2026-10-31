#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned n, k;
	scanf("%u %u", &n, &k);

	int power = 0;

	if (n >= 1 && k > 1) {
		for (int current = 1; current <= n / k; current *= k) {
			power++;
		}

		printf("%d", power);
	}

	return 0;
}