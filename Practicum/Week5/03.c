#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, n;
	scanf("%d %d", &a, &n);

	printf("%d", (a >> n) & 1);
	return 0;
}