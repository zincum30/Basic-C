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
		printf("������ ������ �Է��Ͻÿ�. (��, �̸�, ����(��=1/��=2), ����): ");
		scanf("%s %s %d %d", aniArray[i].spec, aniArray[i].name, &aniArray[i].sex, &aniArray[i].age);
	}

	for (int i=0; i < 1; i++) {
		printf(" ��:%s, �̸�:%s, ����:%d, ����:%d\n", aniArray[i].spec, aniArray[i].name, aniArray[i].sex, aniArray[i].age);
	}


	char inputArray[20];
	for (int i = 0; i < 1; i++) {
		printf("ã������ ������ �̸��� �˻��Ͻÿ�: ");
		scanf("%s", inputArray);
	}


	for (int i = 0; i < 1; i++) {
		if (strcmp(inputArray, aniArray[i].name) == 0) {
			printf(" ��:%s, �̸�:%s, ����:%d, ����:%d\n", aniArray[i].spec, aniArray[i].name, aniArray[i].sex, aniArray[i].age);
			break;

		}
	}




	return 0;
}


