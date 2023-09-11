#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int score = 0;
	scanf("%d", &score);

	if ((90 <= score) && (score <= 100))
	{
		printf("A");
	}
	else if ((80 <= score) && (score <= 89))
	{
		printf("B");
	}
	else if ((70 <= score) && (79 <= score))
	{
		printf("C");
	}
	else if ((60 <= score) && (69 <= score))
	{
		printf("D");
	}
	else if (score < 60)
	{
		printf("F");
	}
	


	return 0;
}