#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char* parray[5];
    int size = 5;
    char buff[50];

    for (int i = 0; i < size; i++) {
        printf("���ڿ��� �Է��ϼ���: ");
        scanf("%s", buff);

        int length = strlen(buff);

        parray[i] = (char*)malloc(length + 1);   // �Է¹��� ���ڿ��� ������ �����޸� �Ҵ�
        strcpy(parray[i], buff);
    }

    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %s\n", i, parray[i]);
    }

    // �����޸� ����
    for (int i = 0; i < size; i++) {
        free(parray[i]);
    }

    return 0;
}