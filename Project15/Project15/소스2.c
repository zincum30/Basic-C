#include <stdio.h>
#include <stdlib.h>

// 명령행인자

int main(int argc, char* argv[]) {
    int a = 20;
    int b = 30;

    if (argc < 2) {
        printf("연산기호를 입력하세요.\n");
        return;
    }

    char oper = argv[1][0];

    switch (oper)
    {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;

    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;

    case '*':
        printf("%d x %d = %d\n", a, b, a * b);
        break;

    case '/':
        printf("%d / %d = %f\n", a, b, a / (float)b);
        break;

    default:
        printf("연산기호를 잘못 입력하셨습니다.\n");
        break;
    }

    return 0;
}