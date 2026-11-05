#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int mostOccurrs = -1;
	int mostOccurredDigit = 0;

	for (int i = 0; i <= 9; i++) {
		int currentOccurrs = 0;
		int temp = n;

		while (temp > 0) {
			int digit = temp % 10;

			if (digit == i)
			{
				currentOccurrs++;
			}

			temp /= 10;
		}

		if (currentOccurrs > mostOccurrs)
		{
			mostOccurrs = currentOccurrs;
			mostOccurredDigit = i;
		}
	}

	printf("%d", mostOccurredDigit);

	return 0;
}
