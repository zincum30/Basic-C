#include <stdio.h>
#include <string.h>


//명령행인자
//프로그램에 어떤 명령을 전달해서 실행될 수 있도록 한다!


int main11(int argc, char* argv[]) {
	int sum = 0;
	printf("실행파일명은: %s\n", atgv[0]);
	for (int i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("입력받은 숫자들의 합계는: %d", sum);


	return 0;
}