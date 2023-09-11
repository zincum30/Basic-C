#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int A = 0;
	int B = 0;
	scanf("%d, %d", &A, &B);

	if (B != 0) {
		printf("%d\n", A + B);
		printf("%d\n", A - B);
		printf("%d\n", A * B);
		printf("%d\n", A / B);
		printf("%d\n", A % B);
	}



	return 0;
}