#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL)); // 난수발생용 씨드값

    int randvalue = rand();   // 난수를 발생한다.
    int directvalue = randvalue % 4;   // 난수를 나에게 의미있는 범위의
                               // 숫자로 만든다.(0 ~ 3, 0:North, 1: South, 2:West, 3:East)

    printf("randvalue: %d, directvalue: %d\n", randvalue, directvalue);

    randvalue = rand();
    directvalue = randvalue % 4;
    printf("randvalue: %d, directvalue: %d\n", randvalue, directvalue);

    return 0;
}