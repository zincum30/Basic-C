#include <stdio.h>
#include <string.h>


//���������
//���α׷��� � ����� �����ؼ� ����� �� �ֵ��� �Ѵ�!


int main11(int argc, char* argv[]) {
	int sum = 0;
	printf("�������ϸ���: %s\n", atgv[0]);
	for (int i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("�Է¹��� ���ڵ��� �հ��: %d", sum);


	return 0;
}