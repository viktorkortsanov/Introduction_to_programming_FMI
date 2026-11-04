#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned a, b;
	scanf("%u %u", &a, &b);

	for (int i = a; i <= b; i++) {
		int iCopy = i;
		int isDifferent = 1;

		while (iCopy > 0) {
			int digit = iCopy % 10;
			int rest = iCopy / 10;

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

			iCopy /= 10;
		}

		if (isDifferent) {
			if (i == b) {
				printf("%d", i);
			}
			else {
				printf("%d, ", i);
			}
		}
	}

	return 0;
}