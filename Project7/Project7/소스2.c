 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main1() {
    int buttonNum = 0;
    printf("������ ��ư��ȣ�� �Է��ϼ���: ");

    scanf("%d", &buttonNum);

    switch (buttonNum) {
    case 0:
        printf("TV ��\n");
        break;

    case 1:
        printf("TV ��\n");
        break;

    case 2:
        printf("���� �÷�\n");
        break;

    case 3:
        printf("���� ����\n");
        break;

    default:   // ����
        printf("��ȣ�� �߸� �Է��ϼ̽��ϴ�.\n");
        break;


    }



    return 0;
}