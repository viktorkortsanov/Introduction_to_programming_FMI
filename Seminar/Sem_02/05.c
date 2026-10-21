#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int r, x, y;
	scanf("%d %d %d", &r, &x, &y);

	if (x * x + y * y == r * r)
	{
		printf("On the circle");
	}
	else if (x * x + y * y > r * r) {
		printf("Out of the circle");
	}
	else {
		printf("In the circle");
	}
}