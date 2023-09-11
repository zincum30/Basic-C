#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



struct tagAnimal {
	char spec[20];
	char name[20];
	int sex;
	int age;
};

typedef struct tagAnimal Animal;


int main() {
	Animal aniArray[1];

	for (int i=0; i < 1; i++) {
		printf("동물의 정보를 입력하시오. (종, 이름, 성별(수=1/암=2), 나이): ");
		scanf("%s %s %d %d", aniArray[i].spec, aniArray[i].name, &aniArray[i].sex, &aniArray[i].age);
	}

	for (int i=0; i < 1; i++) {
		printf(" 종:%s, 이름:%s, 성별:%d, 나이:%d\n", aniArray[i].spec, aniArray[i].name, aniArray[i].sex, aniArray[i].age);
	}


	char inputArray[20];
	for (int i = 0; i < 1; i++) {
		printf("찾으려는 동물의 이름을 검색하시오: ");
		scanf("%s", inputArray);
	}


	for (int i = 0; i < 1; i++) {
		if (strcmp(inputArray, aniArray[i].name) == 0) {
			printf(" 종:%s, 이름:%s, 성별:%d, 나이:%d\n", aniArray[i].spec, aniArray[i].name, aniArray[i].sex, aniArray[i].age);
			break;

		}
	}




	return 0;
}


