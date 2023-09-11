#include <stdio.h>

void AppendArray(int* parray) {
	for (int i = 0; i < 100; i++) {
		*(parray + i) = i;
	}
}

	int main1(void) {

		int array[100];
		AppendArray(array);

		for (int i = 0; i < 100; i++) {
			printf("array[%d]=%d\n", i, array[i]);
		}

		return 0;
	}