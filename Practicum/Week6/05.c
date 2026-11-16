#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b, int c, int d) {
	int maxAB = 0;
	int maxCD = 0;

	if (a > b) {
		maxAB = a;
	}
	else {
		maxAB = b;
	}

	if (c > d) {
		maxCD = c;
	}
	else {
		maxCD = d;
	}

	if (maxAB > maxCD) {
		return maxAB;
	}
	else {
		return maxCD;
	}
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	printf("%d", max(a, b, c, d));
}