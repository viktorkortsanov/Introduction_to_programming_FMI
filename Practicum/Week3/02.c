#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	switch (n) {
	case 0: printf("0");  break;
	case 1: printf("I");  break;
	case 2: printf("II");  break;
	case 3: printf("III");  break;
	case 4: printf("IV");  break;
	case 5: printf("V");  break;
	case 6: printf("VI");  break;
	case 7: printf("VII");  break;
	case 8: printf("VIII");  break;
	case 9: printf("IX");  break;
	}

	return 0;
}