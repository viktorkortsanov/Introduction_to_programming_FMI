#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c;
	scanf("%c", &c);

	int isVowel = c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' ||
		c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';

	printf("%d", isVowel);

	return 0;
}