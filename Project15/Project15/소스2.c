#include <stdio.h>
#include <stdlib.h>

// ���������

int main(int argc, char* argv[]) {
    int a = 20;
    int b = 30;

    if (argc < 2) {
        printf("�����ȣ�� �Է��ϼ���.\n");
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
        printf("�����ȣ�� �߸� �Է��ϼ̽��ϴ�.\n");
        break;
    }

    return 0;
}