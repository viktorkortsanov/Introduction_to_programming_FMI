#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findSum(int start, int end) {
	int sum = 0;

	for (int i = start; i <= end; i += 3) {
		sum += i;
	}

	return sum;
}

int main() {
	int start, end;
	scanf("%d %d", &start, &end);

	printf("%d", findSum(start, end));

	return 0;
}