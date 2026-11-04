#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int digit;
	int evenSum = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &digit);

		if (digit % 2 == 0) {
			evenSum = evenSum * 10 + digit;
		}
	}

	printf("%d", evenSum * 2);

	return 0;
}