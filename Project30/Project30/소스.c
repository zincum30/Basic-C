#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int N; 
	scanf("%d", &N);

	

	for (int i = 0; ; ) {


		if (N <= 1 + 6 * i * (i + 1) / 2)
		{
			printf("%d", i + 1);
			break;
		}

		else {
			i++;
		}

	}


	return 0;
}