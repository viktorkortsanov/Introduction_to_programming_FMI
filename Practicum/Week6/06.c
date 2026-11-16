#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int hasRoot(n) {
	if (n > 0) {
		int root = sqrt(n);

		if (root * root == n) {
			return 1;
		}
	}

	return 0;
}

int main() {
	int n;
	scanf("%d", &n);

	hasRoot(n) ? printf("yes") : printf("no");

	return 0;
}