#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()1 {

	//�����ﰢ��

	int N = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("*\n");

	}

	return 0;
}


