#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    // �ʿ��� ���� ����
    // int matchArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }; //�迭���� ������ �����Ϸ��� ����ϴ� ����...
    int matchValue[3];
    int inputValue[3];
    int S = 0; //STRIKE
    int B = 0; //BALL


    // ���ڸ� ���� ���� ����
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

    // ���� ���� 
START:
    // ���� �Է� �ޱ�
    printf("���� �Է�: ");
    scanf("%d %d %d", &inputValue[1], &inputValue[2], &inputValue[3]);

    // ��ī��Ʈ
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
    printf("�����Դϴ�!\n");

    return 0;

}