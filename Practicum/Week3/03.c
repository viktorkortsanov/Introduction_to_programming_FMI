#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int year;
	scanf("%d", &year);

	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
		printf("Leap year");
	}
	else {
		printf("Non leap year");
	}

	return 0;
}