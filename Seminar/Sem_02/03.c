#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592653589793
#include <stdio.h>

int main(void) {
	char figure;
	scanf(" %c", &figure);

	double s = 0;

	if (figure == 's') {
		double a;
		scanf("%lf", &a);
		s = a * a;
	}
	else if (figure == 'r') {
		double a, b;
		scanf("%lf %lf", &a, &b);
		s = a * b;
	}
	else if (figure == 'c') {
		double r;
		scanf("%lf", &r);
		s = PI * r * r;
	}
	else if (figure == 't') {
		double a, ha;
		scanf("%lf %lf", &a, &ha);
		s = (a * ha) / 2.0;
	}

	printf("%g", s);

	return 0;
}