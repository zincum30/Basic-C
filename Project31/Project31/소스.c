#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 



int main(void) {

	int X;

	scanf("%d", &X);



	int N;

	scanf("%d", &N);

	int a, b, mul, ret = 0;

	for (int i = 0; i <= N; i++) {

		scanf("%d %d". &a, &b);

		mul = a * b;

		ret = ret + mul;

		mul = 0;

	}

	if (X = ret) printf("Yes");

	else printf("No");

	return 0;

}