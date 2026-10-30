#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	for (int x = -100; x <= 100; x++) {

		long long polinom =
			1LL * a * x * x * x * x +
			1LL * b * x * x * x +
			1LL * c * x * x +
			1LL * d * x + e;

		if (polinom >= 0) {
			printf("%d ", x);
		}
	}

	return 0;
}