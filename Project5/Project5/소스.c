#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x = 0;
	int y = 0;

	printf("좌표 x값을 입력하시오 : ");
	scanf("%d", &x);

	printf("좌표 y값을 입력하시오 : ");
	scanf("%d", &y);

	int result1 = (0 <= x) && (x <= 10);
	int result2 = (-1 <= y) && (y <= 0);
	int ret = result1 && result2;
	//printf("%d", result2);


	//int ret = (0 <= x <= 10) && (-1 <= y <= 0);
	//printf("%d\n", ret);


	ret > 0 ? 
		printf("지정한 위치가 범위 안에 있습니다.") : printf("지정한 위치가 범위 안에 없습니다.");


	return 0;

}
