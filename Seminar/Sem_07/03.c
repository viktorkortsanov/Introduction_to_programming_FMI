#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int convertMostRightOneBitToZero(int n) {
	int result = 0;

	return n & (n - 1);
}

int main() {
	int n;
	scanf("%d", &n);

	printf("%d", convertMostRightOneBitToZero(n));

	return 0;
}