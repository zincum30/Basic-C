#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int inputValue = 0;

START:   // ���̺�
    printf("�������� �Է��ϼ���: ");
    scanf("%d", &inputValue);

    if (inputValue == -1) {
        goto EXIT;
    }

    printf("�ٽ� !!\n");
    goto START;

    printf("������\n");

EXIT:
    printf("����\n");

    return 0;
}