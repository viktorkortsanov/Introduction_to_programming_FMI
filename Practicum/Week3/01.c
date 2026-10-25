#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if (n >= 0)
	{
		printf("Positive");
	}
	else {
		printf("Negative");
	}

	return 0;
}