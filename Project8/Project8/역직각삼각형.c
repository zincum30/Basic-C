#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//역직각삼각형

	int N = 0;
	scanf("%d", &N);

	for (int i = N; -1 < i; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("*\n");

	}

	return 0;
}