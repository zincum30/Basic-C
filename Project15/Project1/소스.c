#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    // 필요한 변수 선언
    // int matchArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }; //배열에서 무작위 추출하려고 고민하던 흔적...
    int matchValue[3];
    int inputValue[3];
    int S = 0; //STRIKE
    int B = 0; //BALL


    // 세자리 랜덤 숫자 생성
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        matchValue[i] = rand() % 3 + 1;
        for (int j = 0;j < i; j++)
        {
            if (matchValue[i] == matchValue[j])

                i--;
        }

    }

    // 게임 진행 
START:
    // 숫자 입력 받기
    printf("숫자 입력: ");
    scanf("%d %d %d", &inputValue[1], &inputValue[2], &inputValue[3]);

    // 볼카운트
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matchValue[i] == inputValue[j]) {
                if (i == j) {
                    S++;
                    if (S == 3) {
                        goto EXIT;
                    }
                }
                else {
                    B++;
                }
                printf("%d STRIKE %d BALL\n", S, B);
                goto START;
            }
            else
                printf("OUT\n");
            goto START;
        }
    }



EXIT:
    printf("정답입니다!\n");

    return 0;

}