#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n = 0;
	scanf("%d", &n);
	printf("%d", n % 2 == 0);

	return 0;
}