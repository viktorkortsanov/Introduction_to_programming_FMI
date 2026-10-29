#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned a, b;
	scanf("%u %u", &a, &b);

	for (int i = a; i <= b; i++) {
		int temp = i;
		int isDifferent = 1;

		while (temp > 0) {
			int digit = temp % 10;
			int rest = temp / 10;

			while (rest > 0) {
				if (digit == rest % 10) {
					isDifferent = 0;
					break;
				}

				rest /= 10;
			}

			if (!isDifferent) {
				break;
			}

			temp /= 10;
		}

		if (isDifferent && i == b) {
			printf("%d", i);
		}
		else {
			printf("%d, ", i);
		}
	}

	return 0;
}