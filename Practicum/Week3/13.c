#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	int lastDigit = n % 10;
	n /= 10;

	int secondDigit = n % 10;
	n /= 10;

	int sum = n * secondDigit * lastDigit;

	if (sum > k)
	{
		printf("YES %d", sum + k);
	}
	else {
		printf("NO %d", k - sum);
	}
	return 0;
}