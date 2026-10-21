#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int lastDigit = n % 10;
	int newDigit = 0;

	if (lastDigit == 0 || lastDigit == 2 || lastDigit == 4 || lastDigit == 6 || lastDigit == 8)
	{
		newDigit = lastDigit % 3;
	}
	else {
		newDigit = lastDigit % 2;
	}

	int result = (n / 10) * 10 + newDigit;

	printf("%d", result);

	return 0;
}