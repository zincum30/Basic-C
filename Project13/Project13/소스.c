#include <stdio.h>


int minus(int a, int b) {
	int temp = 0;
	temp = a - b;

	return temp;

}


int mul(int a, int b) {
	int temp2 = 0;
	temp2 = a * b;

	return temp2;
}


int dev(int a, int b) {
	int temp3 = 0;
	temp3 = a / b;

	return temp3;
}


int main() {
	int a = 20;
	int b = 30;

	
	int ret = minus(a, b);
	int ret2 = mul(a, b);
	int ret3 = dev(a, b);

	printf("%d - %d = %d\n", a, b, ret);
	printf("%d * %d = %d\n", a, b, ret2);
	printf("%d / %d = %d\n", a, b, ret3);

	// ����, ����, ������ ����� �Լ��� ȣ���ؼ� ���� ���� �ް� ����غ�����...


	return 0;
}