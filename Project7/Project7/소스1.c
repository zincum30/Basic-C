#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() {
	int leftTopX = 0, leftTopY = 0;
	int rightBottomX = 0, rightBottomY = 0;

	leftTopX = 0, leftTopY = 0;
	rightBottomX = 10, rightBottomY = 10;
	printf("�� (%d,%d)�� ������ �� ���� ���̰� %d�� ���簢�� A'B'C'D'�� �ִ�.\n\n", leftTopX, leftTopY, rightBottomX- leftTopX);

   int ptX = 0, ptY = 0;
   int len = 0;


   printf("������ ���簢�� ABCD�� ���� ��, ������ A�� ��ǥ�� �Է��Ͻÿ�.: ");
   scanf("%d, %d", &ptX, &ptY);
   printf("������ ���簢�� ABCD�� ���� ��, �� ���� ���̸� �Է��Ͻÿ�.: ");
   scanf("%d", &len);
   


   int retX = ((leftTopX < ptX) && (ptX < rightBottomX)) || ((leftTopX < ptX + len) && (ptX + len < rightBottomX));
   int retY = ((leftTopY < ptY) && (ptY < rightBottomY)) || ((leftTopY < ptY - len) && (ptY - len < rightBottomY));


   int ret = retX && retY;

  
   ret ?
	   printf("���簢�� ABCD�� ���簢�� A'B'C'D'�� ��ģ��.") : printf("���簢�� ABCD�� ���簢�� A'B'C'D'�� ��ġ�� �ʴ´�.");



	return 0;
}