#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ch1, ch2, ch3, ch4, ch5;
	scanf(" %c %c %c %c %c", &ch1, &ch2, &ch3, &ch4, &ch5);

	if (ch5 >= 'a' && ch5 <= 'z') {
		ch5 -= 32;
	}

	ch3 -= 32;
	ch4 -= 32;

	int inA = ch5 >= ch1 && ch5 <= ch2;
	int inB = ch5 >= ch3 && ch5 <= ch4;

	int unionAB = inA || inB;
	int intersectionAB = inA && inB;
	int differenceAB = inA && !inB;
	int onlyOne = unionAB && !intersectionAB;

	printf("%s, ", unionAB ? "true" : "false");
	printf("%s, ", intersectionAB ? "true" : "false");
	printf("%s, ", differenceAB ? "true" : "false");
	printf("%s", onlyOne ? "true" : "false");

	return 0;
}