#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int inputValue = 0;

START:   // 레이블
    printf("정수값을 입력하세요: ");
    scanf("%d", &inputValue);

    if (inputValue == -1) {
        goto EXIT;
    }

    printf("다시 !!\n");
    goto START;

    printf("종료전\n");

EXIT:
    printf("종료\n");

    return 0;
}