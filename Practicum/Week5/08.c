#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	a = a & (a - 1);
	printf("%d", a);

	return 0;
}