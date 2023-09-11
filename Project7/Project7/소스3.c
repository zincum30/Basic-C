#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char oper = 0;
	printf("연산방법을 입력하세요(+, -, *, /): ");

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
		printf("연산기호를 잘못 입력하셨습니다.");
		break;

	}

	return 0;
}