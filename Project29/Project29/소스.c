#include <stdio.h>
#include <conio.h>

struct Color {   // 구조체 비트 필드
    unsigned short blue : 5;
    unsigned short green : 6;
    unsigned short red : 5;
};

// unsigned short 값을 이진수로 출력해주는 함수
void bitPrint(unsigned short value) {
    int mask = 1;
    int count = sizeof(unsigned short) * 8;
    count--;

    int output = 0;

    while (count >= 0) {
        mask = mask << count;
        printf("%d", value & mask ? 1 : 0);

        mask = 1;

        if (count % 8 == 0) {
            printf(" ");
        }

        count--;
    }
}

int main() {
    struct Color color;

    color.red = 1;
    color.green = 2;
    color.blue = 3;

    union test {
        struct Color color;
        unsigned short value;
    };

    union test a;
    a.color = color;

    bitPrint(a.value);


    return 0;
}