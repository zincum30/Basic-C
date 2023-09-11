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

	// 리턴값은 int 고 매개변수로 int값 두개를 받는
	// 함수에 대한 포인터 변수
	int(*pfunc)(int, int);   // 함수 포인터 변수

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

	// 리턴값은 float고 매개변수로 int값 2개를 받는
	// 함수의 주소값을 저장하는 포인터 변수
	float(*pfunc2)(int, int); // 함수 포인터 변수

	pfunc2 = div;

	float fret = pfunc2(a, b);
	printf("%d / %d = %lf\n", a, b, fret);

	return 0;
}