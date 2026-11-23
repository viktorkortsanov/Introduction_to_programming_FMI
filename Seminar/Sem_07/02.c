#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getOneBitCount(int n) {
	int oneBitCount = 0;

	while (n > 0) {
		if ((n & 1) == 1) {
			oneBitCount++;
		}

		n = n >> 1;
	}

	return oneBitCount;
}

int main() {
	int n;
	scanf("%d", &n);

	printf("%d", getOneBitCount(n));

	return 0;
}