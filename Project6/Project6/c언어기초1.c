#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1(void) {
    int x = 0;
    int y = 0;

    printf("��ǥ x���� �Է��Ͻÿ� : ");
    scanf("%d", &x);

    printf("��ǥ y���� �Է��Ͻÿ� : ");
    scanf("%d", &y);



    int ret = (0 <= x <= 10) && (-1 <= y <= 0);
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", (0 <= -100) <= 10);
    printf("%d\n", -1 <= y <= 0);
    printf("%d\n", ret);
    ret > 0 ?
        printf("������ ��ġ�� ���� �ȿ� �ֽ��ϴ�.") : printf("������ ��ġ�� ���� �ȿ� �����ϴ�.");


    return 0;

}