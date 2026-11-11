#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, pos;
	scanf("%d %d", &a, &pos);

	a = a & ~(1 << pos);
	printf("%d", a);

	return 0;
}