#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int decodeLastKBits(int n, int k) {
	int bitMask = (1 << k) - 1;

	return n & bitMask;
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	printf("%d", decodeLastKBits(n, k));

	return 0;
}