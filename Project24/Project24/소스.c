#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n = 0;
	scanf("%d\n", &n);

	int count, number = 0;
	int countArr[23] = {0};

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &number);
		countArr[number-1] = countArr[number-1] + 1;
	}

	for (int j = 0; j < 23; j++)
	{
		printf("%d ", countArr[j]); 
	}



	return 0;
}





