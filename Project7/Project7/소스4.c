#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() {
    int buttonNum = 0;
    int isOn = 0;
    printf("리모컨 버튼번호를 입력하세요: ");

    scanf("%d", &buttonNum);

    if (buttonNum == 0) {
        printf("TV 켜\n");
    }
    else if (buttonNum == 1) {
        printf("TV 켜\n");
    }
    else if (buttonNum == 2) {
        printf("TV 켜\n");
    }
    else if (buttonNum == 3) {
        printf("TV 켜\n");
    }
    else if (isOn == 0) {
        printf("TV 꺼져있습니다.\n");
    }
    else if (isOn == 1) {
        printf("TV 켜져있습니다.\n");
    }

    switch (buttonNum) {
    case 0:
        printf("TV 켜\n");
        break;

    case 1:
        printf("TV 꺼\n");
        break;

    case 2:
        printf("volumn up\n");
        break;

    case 3:
        printf("volumn down\n");
        break;

    default:
        if (isOn == 0) {
            printf("TV 꺼져있습니다.\n");
        }
        else if (isOn == 1) {
            printf("TV 켜져있습니다.\n");
        }
        break;
    }



    return 0;
}