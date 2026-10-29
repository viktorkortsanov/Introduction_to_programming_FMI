#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int num = 0;

	for (int i = 0; i < n; i++) {
		int digit;
		scanf("%d", &digit);

		if (digit % 2 == 0)
		{
			num = num * 10 + digit;
		}
	}

	printf("%d", num * 2);

	return 0;
}