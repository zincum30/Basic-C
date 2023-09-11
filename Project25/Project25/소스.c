#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int n= 0;
	int arr[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n);
		arr[i] = n;
	}

	int max= 0, index = 0;
	for (int j = 0; j < 9; j++)
		if (arr[j] > max)
		{
			max = arr[j];
			index = j+1;
		}

	printf("%d\n%d", max, index);


	return 0;
}

