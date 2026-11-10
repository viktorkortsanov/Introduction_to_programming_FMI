#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned n;
	scanf("%u", &n);

	int digit;
	int max1 = 0;
	int max2 = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &digit);

		if (digit > max1)
		{
			max1 = digit;
		}

		if (digit > max2 && digit != max1) {
			max2 = digit;
		}
	}

	printf("%d %d", max1, max2);

	return 0;
}