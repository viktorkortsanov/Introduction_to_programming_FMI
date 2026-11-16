#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char convertChar(char ch) {
	if (ch >= 'a' && ch <= 'z') {
		ch -= 32;
	}
	else {
		ch += 32;
	}

	return ch;
}

int isChar(char ch) {
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
		return 1;
	}

	return 0;
}

int main() {
	char ch;
	scanf("%c", &ch);

	if (isChar(ch)) {
		printf("%c", convertChar(ch));
	}
	else {
		printf("This character is not a letter!");
	}

	return 0;
}