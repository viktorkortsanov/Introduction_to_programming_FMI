#include <stdio.h>

int main() {
	printf("%d, ", sizeof(int));
	printf("%d, ", sizeof(double));
	printf("%d, ", sizeof(float));
	printf("%d, ", sizeof(char));
	printf("%d, ", sizeof(short int));
	printf("%d, ", sizeof(long int));
	printf("%d, ", sizeof(long long int));
	printf("%d;", sizeof(unsigned int));

	return 0;
}