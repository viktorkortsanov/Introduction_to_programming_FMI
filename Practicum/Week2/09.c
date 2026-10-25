#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1, n2, n3, n4, n5;
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	int n1IsOdd = n1 * (n1 % 2 != 0);
	int n2IsOdd = n2 * (n2 % 2 != 0);
	int n3IsOdd = n3 * (n3 % 2 != 0);
	int n4IsOdd = n4 * (n4 % 2 != 0);
	int n5IsOdd = n5 * (n5 % 2 != 0);

	int oddSum = n1IsOdd + n2IsOdd + n3IsOdd + n4IsOdd + n5IsOdd;
	printf("%d", oddSum);
}