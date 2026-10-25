#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double a, b;
	char operator;
	scanf("%lf %lf %c", &a, &b, &operator);

	switch (operator) {
	case '+': printf("%g", a + b); break;
	case '-': printf("%g", a - b); break;
	case '*': printf("%g", a * b); break;
	case '/': printf("%g", (double)a / b); break;
	default: printf("Invalid operator!");
	}

	return 0;
}