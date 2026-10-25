#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int day;
	scanf("%d", &day);

	switch (day) {
	case 1: printf("1 - Monday");  break;
	case 2: printf("2 - Tuesday");  break;
	case 3: printf("3 - Wednesday");  break;
	case 4: printf("4 - Thursday");  break;
	case 5: printf("5 - Friday");  break;
	case 6: printf("6 - Saturday");  break;
	case 7: printf("7 - Sunday");  break;
	default: printf("Please enter a number from 1 to 7");
	}

	return 0;
}