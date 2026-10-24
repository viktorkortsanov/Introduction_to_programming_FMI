#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int isDevisible = n % 4 == 0 || n % 7 == 0;
	printf("%d", isDevisible);

	return 0;
}