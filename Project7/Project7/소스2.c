 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main1() {
    int buttonNum = 0;
    printf("리모컨 버튼번호를 입력하세요: ");

    scanf("%d", &buttonNum);

    switch (buttonNum) {
    case 0:
        printf("TV 켜\n");
        break;

    case 1:
        printf("TV 꺼\n");
        break;

    case 2:
        printf("볼륨 올려\n");
        break;

    case 3:
        printf("볼륨 내려\n");
        break;

    default:   // 생략
        printf("번호를 잘못 입력하셨습니다.\n");
        break;


    }



    return 0;
}