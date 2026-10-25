#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int r, x, y;
	scanf("%d %d %d", &r, &x, &y);


	if (x * x + y * y < r * r) {
		printf("In the circle");
	}
	else if (x * x + y * y == r * r) {
		printf("On the circle");
	}
	else {
		printf("Out of the circle");
	}

	return 0;
}