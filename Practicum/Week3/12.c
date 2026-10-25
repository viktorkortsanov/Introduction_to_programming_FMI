#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int day, month, year;
	scanf("%d %d %d", &day, &month, &year);

	if (day >= 1 && day <= 31 &&
		month >= 1 && month <= 12 &&
		year >= 1 && !(month = 2 && day > 28))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}

	return 0;
}