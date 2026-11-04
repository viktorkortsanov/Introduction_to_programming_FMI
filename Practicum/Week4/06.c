#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int sum = 0;

	while (scanf("%d", &n) && n != 0) {
		sum += n;
	}

	printf("%d", sum);

	return 0;
}