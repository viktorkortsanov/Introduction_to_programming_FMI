#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, pos, value;
	scanf("%d, %d, %d", &a, &pos, &value);

	if (value) {
		a = a | (1 << pos);
	}
	else {
		a = a & ~(1 << pos);
	}

	printf("%d", a);

	return 0;
}