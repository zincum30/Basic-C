#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

float div(int a, int b) {
	return a / (float)b;
}

int main() {

	int a = 20;
	int b = 30;

	// ���ϰ��� int �� �Ű������� int�� �ΰ��� �޴�
	// �Լ��� ���� ������ ����
	int(*pfunc)(int, int);   // �Լ� ������ ����

	pfunc = &add;
	//pfunc = add;

	printf("&add = %p\n", add);

	int ret = pfunc(a, b);
	printf("%d + %d = %d\n", a, b, ret);

	pfunc = sub;

	ret = pfunc(a, b);
	printf("%d - %d = %d\n", a, b, ret);

	pfunc = mul;
	ret = pfunc(a, b);

	printf("%d x %d = %d\n", a, b, ret);

	//pfunc = div;

	// ���ϰ��� float�� �Ű������� int�� 2���� �޴�
	// �Լ��� �ּҰ��� �����ϴ� ������ ����
	float(*pfunc2)(int, int); // �Լ� ������ ����

	pfunc2 = div;

	float fret = pfunc2(a, b);
	printf("%d / %d = %lf\n", a, b, fret);

	return 0;
}