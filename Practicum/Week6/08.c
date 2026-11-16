#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findSum() {
	int sum = 0;

	for (int i = 2; i <= 100; i += 3) {
		sum += i;
	}

	return sum;
}

int main() {
	printf("%d", findSum());

	return 0;
}