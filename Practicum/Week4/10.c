#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);

	while (n2 != 0) {
		int remainder = n1 % n2;
		n1 = n2;
		n2 = remainder;
	}

	printf("%d", n1);

	return 0;
}