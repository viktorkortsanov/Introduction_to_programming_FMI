#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money = 0;
	scanf("%d", &money);

	int hundred = money / 100;
	money %= 100;

	int fifty = money / 50;
	money %= 50;

	int twenty = money / 20;
	money %= 20;

	int ten = money / 10;
	money %= 10;

	int five = money / 5;
	money %= 5;

	int two = money / 2;
	money %= 2;

	printf("%dx100, %dx50, %dx20, %dx10, %dx5, %dx2, %dx1", hundred, fifty, twenty, ten, five, two, money);

	return 0;
}