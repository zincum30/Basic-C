#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL)); // �����߻��� ���尪

    int randvalue = rand();   // ������ �߻��Ѵ�.
    int directvalue = randvalue % 4;   // ������ ������ �ǹ��ִ� ������
                               // ���ڷ� �����.(0 ~ 3, 0:North, 1: South, 2:West, 3:East)

    printf("randvalue: %d, directvalue: %d\n", randvalue, directvalue);

    randvalue = rand();
    directvalue = randvalue % 4;
    printf("randvalue: %d, directvalue: %d\n", randvalue, directvalue);

    return 0;
}