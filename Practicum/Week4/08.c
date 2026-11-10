#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int n1 = 0;
	int n2 = 1;

	for (int i = 0; i < n; i++) {
		printf("%d ", n1);

		int next = n1 + n2;

		n1 = n2;
		n2 = next;
	}

	return 0;
}