#include <stdio.h>
#include <stdlib.h>

int main() {

	// �����޸� ���� �Ҵ� �Լ� malloc, calloc, realloc

	int* pa = (int*)malloc(4);   // �����޸� ���� �Ҵ�

	*pa = 1000;

	printf("*pa = %d\n", *pa);

	free(pa);   // �����޸� ���� ��ȯ.


	return 0;
}