#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	int oneBitCount = 0;

	while (a > 0) {
		if ((a & 1) != 0) {
			oneBitCount++;
		}

		a = a >> 1;
	}

	printf("%d", oneBitCount);

	return 0;
}