#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	(n & 1) == 0 ? printf("true") : printf("false");

	return 0;
}