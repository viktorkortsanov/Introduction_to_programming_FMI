#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	char operator;
	scanf("%d %d", &a, &b);
	scanf(" %c", &operator);

	float result = 0;

	switch (operator) {
	case '+': result = a + b; break;
	case '-': result = a - b; break;
	case '*': result = a * b; break;
	case '/': result = (float)a / b; break;
	default: printf("Invalid operator!");
	}

	printf("%g", result);
}