#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1, n2, n3, n4, n5;
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	if (n1 < n2 && n2 > n3 && n3 < n4 && n4 > n5)
	{
		printf("yes");
	}
	else {
		printf("no");
	}

	return 0;
}