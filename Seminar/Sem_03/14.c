#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned a, b;
	scanf("%u %u", &a, &b);

	int counter = 0;

	if (a <= b) {
		for (int i = a; i <= b; i++) {
			int iCopy = i;
			int digitSum = 0;
			int digitProducts = 1;

			while (iCopy > 0) {
				int digit = iCopy % 10;

				digitSum += digit;
				digitProducts *= digit;

				iCopy /= 10;
			}

			if (digitSum == digitProducts)
			{
				counter++;
			}
		}
	}

	printf("%d", counter);

	return 0;
}