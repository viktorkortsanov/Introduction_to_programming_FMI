#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0;
	scanf("%d", &n);

	int isEvenOrOdd = n % 2 == 0;
	printf("%d", isEvenOrOdd);

	return 0;
}