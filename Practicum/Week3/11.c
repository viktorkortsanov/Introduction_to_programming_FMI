#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if (n % 10 == 5 || n % 3 == 0 && n % 5 == 0)
	{
		printf("TRUE");
	}
	else {
		printf("FALSE");
	}

	return 0;
}