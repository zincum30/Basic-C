#include <stdio.h>

void Reverse(int* parray) {
	for (int i = 0; i < 50; i++) {
		int temp = *(parray + (99 - i));
		*(parray + (99 - i)) = *(parray + i);
		*(parray + i) = temp;
		
	}
}


int main() {

	int array[100];

	printf("���� �� ��\n");
	for (int i = 0; i < 100; i++) {
		array[i] = i;
		printf("array[%d] = %d\n", i, array[i]);
	}

	Reverse(array);

	printf("���� �� ��\n");
	for (int i = 0; i < 100; i++) {
		printf("array[%d]=%d\n", i, array[i]);
	}


	return 0;
}