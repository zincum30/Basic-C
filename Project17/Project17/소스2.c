#include <stdio.h>

void AppendArray(int* parray[100]) {
	for (int i = 0; i < 100; i++) {
		*parray[i] = i;
	}


int main() {

	int array[100];
	
	for (int i = 0; i < 100, i++){
		AppendArray(&array[i]);
		printf("array[%d] = %d\n", i, array[i]);	
	}


	return 0;
}