#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int lastDigit = n % 10;
	n /= 10;

	int thirdDigit = n % 10;
	n /= 10;

	int secondDigit = n % 10;
	n /= 10;

	int firstNewNum = n * 10 + lastDigit;
	int secondNewNum = secondDigit * 10 + thirdDigit;

	if (firstNewNum > secondNewNum)
	{
		printf("%d > %d", firstNewNum, secondNewNum);
	}
	else if (firstNewNum < secondNewNum) {
		printf("%d < %d", firstNewNum, secondNewNum);
	}
	else {
		printf("%d = %d", firstNewNum, secondNewNum);
	}

	return 0;
}