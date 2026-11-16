#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	int temp = a;
	int pos = -1;
	int i = 0;

	while (temp > 0) {
		if ((temp & 1) == 0) {
			pos = i;
		}

		temp = temp >> 1;
		i++;
	}

	if (pos != -1) {
		a = a | (1 << pos);
	}

	printf("%d", a);

	return 0;
}
