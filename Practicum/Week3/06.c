#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;
	scanf("%c", &ch);

	if (ch >= 65 && ch <= 90)
	{
		printf("%c\n", ch + 32);
	}
	else if (ch >= 97 && ch <= 122)
	{
		printf("%c\n", ch - 32);
	}
	else
	{
		printf("Invalid character");
	}

	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
		ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		printf("Vowel");
	}
	else
	{
		if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
		{
			printf("Consonant");
		}
	}
}