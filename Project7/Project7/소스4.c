#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() {
    int buttonNum = 0;
    int isOn = 0;
    printf("������ ��ư��ȣ�� �Է��ϼ���: ");

    scanf("%d", &buttonNum);

    if (buttonNum == 0) {
        printf("TV ��\n");
    }
    else if (buttonNum == 1) {
        printf("TV ��\n");
    }
    else if (buttonNum == 2) {
        printf("TV ��\n");
    }
    else if (buttonNum == 3) {
        printf("TV ��\n");
    }
    else if (isOn == 0) {
        printf("TV �����ֽ��ϴ�.\n");
    }
    else if (isOn == 1) {
        printf("TV �����ֽ��ϴ�.\n");
    }

    switch (buttonNum) {
    case 0:
        printf("TV ��\n");
        break;

    case 1:
        printf("TV ��\n");
        break;

    case 2:
        printf("volumn up\n");
        break;

    case 3:
        printf("volumn down\n");
        break;

    default:
        if (isOn == 0) {
            printf("TV �����ֽ��ϴ�.\n");
        }
        else if (isOn == 1) {
            printf("TV �����ֽ��ϴ�.\n");
        }
        break;
    }



    return 0;
}