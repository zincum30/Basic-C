#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x = 0;
	int y = 0;

	printf("��ǥ x���� �Է��Ͻÿ� : ");
	scanf("%d", &x);

	printf("��ǥ y���� �Է��Ͻÿ� : ");
	scanf("%d", &y);

	int result1 = (0 <= x) && (x <= 10);
	int result2 = (-1 <= y) && (y <= 0);
	int ret = result1 && result2;
	//printf("%d", result2);


	//int ret = (0 <= x <= 10) && (-1 <= y <= 0);
	//printf("%d\n", ret);


	ret > 0 ? 
		printf("������ ��ġ�� ���� �ȿ� �ֽ��ϴ�.") : printf("������ ��ġ�� ���� �ȿ� �����ϴ�.");


	return 0;

}
