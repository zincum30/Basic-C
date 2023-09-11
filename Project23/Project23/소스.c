#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int Score(char* pret, int size) {
	int finalscore = 0;
	int plus = 0;

	for (int i = 0; i <= size; i++) {
		if (pret[i] == 'O')
		{
			plus++;
			finalscore = finalscore + plus;
		}

		else plus = 0;

	}

	return finalscore;
}


int main() {


	int n = 0;
	scanf("%d\n", &n);

	
	char ret[80];
	int result;

	for (int j = 0; j < n; j++) {
		scanf("%s", ret);
		result = Score(ret, strlen(ret));
		printf("%d\n", result);
	}
	

	return 0;
}