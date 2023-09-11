#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1(void) {
    int x = 0;
    int y = 0;

    printf("좌표 x값을 입력하시오 : ");
    scanf("%d", &x);

    printf("좌표 y값을 입력하시오 : ");
    scanf("%d", &y);



    int ret = (0 <= x <= 10) && (-1 <= y <= 0);
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", (0 <= -100) <= 10);
    printf("%d\n", -1 <= y <= 0);
    printf("%d\n", ret);
    ret > 0 ?
        printf("지정한 위치가 범위 안에 있습니다.") : printf("지정한 위치가 범위 안에 없습니다.");


    return 0;

}