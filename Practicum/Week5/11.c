#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int aZeroBitCount = 0;
	int bZeroBitCount = 0;
	int aOneBitCount = 0;
	int bOneBitCount = 0;

	do {
		if ((a & 1) == 0) {
			aZeroBitCount++;
		}
		else {
			aOneBitCount++;
		}

		if ((b & 1) == 0) {
			bZeroBitCount++;
		}
		else {
			bOneBitCount++;
		}

		a = a >> 1;
		b = b >> 1;

	} while (a > 0 || b > 0);

	if (aZeroBitCount == bZeroBitCount && aOneBitCount == bOneBitCount) {
		printf("true");
	}
	else {
		printf("false");
	}

	return 0;
}
