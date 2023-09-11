#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char* parray[5];
    int size = 5;
    char buff[50];

    for (int i = 0; i < size; i++) {
        printf("문자열을 입력하세요: ");
        scanf("%s", buff);

        int length = strlen(buff);

        parray[i] = (char*)malloc(length + 1);   // 입력받은 문자열을 저장할 동적메모리 할당
        strcpy(parray[i], buff);
    }

    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %s\n", i, parray[i]);
    }

    // 동적메모리 해제
    for (int i = 0; i < size; i++) {
        free(parray[i]);
    }

    return 0;
}