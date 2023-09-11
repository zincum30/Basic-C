#include <stdio.h>
#include <stdlib.h>

int main() {

	// 동적메모리 공간 할당 함수 malloc, calloc, realloc

	int* pa = (int*)malloc(4);   // 동적메모리 공간 할당

	*pa = 1000;

	printf("*pa = %d\n", *pa);

	free(pa);   // 동적메모리 공간 반환.


	return 0;
}