#include <stdio.h>

void PrintStr(char* str, int size) {
    for (int i = 0; i < size; i++) {
        putchar(str[i]);
    }
}

void PrintStr2(char* str) {
    while (*str) {
        putchar(*str);
        str++;
    }
}

// 문자열안에 문자의 갯수를 세어서 리턴해주는 함수
int strlength(char* str) {
    int count = 0;

    while (*str) {
        count++;
        str++;
    }

    return count;
}

// src에 있는 문자열을 dest의 공간에 복사해주는 함수
char* strcopy(char* dest, char* src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
}

// dest에 있는 문자열과 src에 있는 문자열을 병합해주는 함수
// dest문자열 뒤에 src의 문자열을 결합해주는 함수
char* strconcat(char* dest, char* src) {
    for (int i = 0; dest[i] != 0; i++);
    for (int j = 0; src[j] != 0; j++) {
        *dest + i = src + j;
    }
    
}

// str1문자열과 str2 문자열의 비교해서 같으면 0
// 다르면 1, -1을 리턴해주는 함수
int strcompare(char* str1, char* str2) {
    for (int i = 0; str1[i] != 0; i++) {

            if (str1[i] == str2[i]) printf("1");
            else printf("0");
        }
    }
}

int main1() {
    // 숫자, 문자, 문자열
    char str[] = { 'M', 'O', 'N' };   // 문자배열
    char str2[] = "MON";   // 문자열
    char str3[] = { 'M', 'O', 'N', '\0' };

    int length = strlength(str3);

    printf("length = %d\n", length);


    return 0;
}