#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char oper = 0;
	printf("�������� �Է��ϼ���(+, -, *, /): ");

	scanf("%c", &oper);

	switch (oper){
	case '+':
	{
		int a = 20;
		int b = 30;

		printf("%d + %d = %d\n", a, b, a - b);
	}
	break;

	case '-':
	{
		int a = 20;
		int b = 30;

		printf("%d - %d = %f/\n", a, b, a - b);
	}
	break;

	case '/':
	{

		int a = 20;
		int b = 30;

		printf("%d / %d = %f/\n", a, b, a / (float)b);
	}
	break;

	case '*':
	{
		int a = 20;
		int b = 30;

		printf("%d * %d = %f/\n", a, b, a * b);
	}
	break;

	default:
		printf("�����ȣ�� �߸� �Է��ϼ̽��ϴ�.");
		break;

	}

	return 0;
}