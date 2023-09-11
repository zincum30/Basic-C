#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int test, bread = 0;
	int weight[] = { 0 };
	int mat[] = { 0 };
	int vol[] = { 0 };

	printf("테스트 횟수 : ");
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++) {
		printf("빵의 개수 : ");
		scanf("%d", &bread);
	}

	int* mat = (int* )malloc(sizeof(int) * bread);
	int* vol = (int* )malloc(sizeof(int) * bread);

	for (int i = 0; i < bread; i++) {

		printf("빵의 무게 : ");
		scanf("%d %d %d", weight[i]);
	
		printf("선반 재질 : ");
		scanf("%d %d %d", mat[i]);

		printf("선반 용량 : ");
		scanf("%d %d %d", vol[i]);

		if (mat[i] = 2) vol[i] = 2 * vol[i];
		
		}
	


	//for (int i = 0; i < bread; i++) {
	//	for (int j = 0; j < (bread - 1) - i; j++) {
	//		if (mat[j] < mat[j + 1]) {
	//			int temp = 0;
	//			temp = mat[j];
	//			mat[j] = mat[j + 1];
	//			mat[j + 1] = temp;
	//		}
	//	}
	//}

	//for (int i = 0; i < bread; i++) {
	//	for (int j = 0; j < (bread - 1) - i; j++) {
	//		if (vol[j] < vol[j + 1]) {
	//			int temp = 0;
	//			temp = vol[j];
	//			vol[j] = vol[j + 1];
	//			vol[j + 1] = temp;
	//		}
	//	}
	//}
	// 
	//int count = 0;
	//for (int i = 0; i < bread; i++) {
	//	if (mat[i] > vol[i]) count++;
	//}

	//printf(count);


	return 0;
}