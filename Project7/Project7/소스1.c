#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() {
	int leftTopX = 0, leftTopY = 0;
	int rightBottomX = 0, rightBottomY = 0;

	leftTopX = 0, leftTopY = 0;
	rightBottomX = 10, rightBottomY = 10;
	printf("점 (%d,%d)를 지나고 한 변의 길이가 %d인 정사각형 A'B'C'D'가 있다.\n\n", leftTopX, leftTopY, rightBottomX- leftTopX);

   int ptX = 0, ptY = 0;
   int len = 0;


   printf("임의의 정사각형 ABCD가 있을 때, 꼭지점 A의 좌표를 입력하시오.: ");
   scanf("%d, %d", &ptX, &ptY);
   printf("임의의 정사각형 ABCD가 있을 때, 한 변의 길이를 입력하시오.: ");
   scanf("%d", &len);
   


   int retX = ((leftTopX < ptX) && (ptX < rightBottomX)) || ((leftTopX < ptX + len) && (ptX + len < rightBottomX));
   int retY = ((leftTopY < ptY) && (ptY < rightBottomY)) || ((leftTopY < ptY - len) && (ptY - len < rightBottomY));


   int ret = retX && retY;

  
   ret ?
	   printf("정사각형 ABCD가 정사각형 A'B'C'D'와 겹친다.") : printf("정사각형 ABCD가 정사각형 A'B'C'D'와 겹치지 않는다.");



	return 0;
}