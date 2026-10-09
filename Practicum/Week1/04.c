#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int totalSeconds = 0;

	scanf("%d", &totalSeconds);

	int days = totalSeconds / 86400;
	int timeLeft = totalSeconds % 86400;

	int hours = timeLeft / 3600;
	timeLeft = timeLeft % 3600;

	int minutes = timeLeft / 60;
	timeLeft = timeLeft % 60;

	printf("%d days, %d hours, %d minutes, %d seconds", days, hours, minutes, timeLeft);

	return 0;
}