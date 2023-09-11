#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>


int Ava(int N, int * scoreArr){
	
	int sum, ava = 0;
	for (int i = 0; i < N; i++) {
		sum = sum + scoreArr[i];
	}
	ava = sum / (float)N;
	
	return ava;
}



int main1() {

	int C = 0;
	scanf("%d", &C);

	for (int i = 0; i < C; i++) {

		
		int scoreArr[1000] = { 0 };
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf("%d", score[j]);
			sum = sum + score[j];
		}
		ava = sum / (float)N;
		
		if


	}
	

	return 0;
}