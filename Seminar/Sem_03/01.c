#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned n;
	scanf("%u", &n);

	int year;
	unsigned leapYearCount = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &year);

		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			leapYearCount++;
		}
	}

	printf("%u", leapYearCount);

	return 0;
}