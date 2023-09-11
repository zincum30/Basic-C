#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() {

	//속이 찬 사각형

	int N = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			printf("*");
		}

		printf("*\n");

	}


}


