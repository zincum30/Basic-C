#pragma once //


// 문자열안에 문자의 갯수를 세어서 리턴해주는 함수
int strlength(char* str) {
    int count = 0;

    while (*str) {
        str++;
        count++;
    }

    return count;
}


// src에 있는 문자열을 dest의 공간에 복사해주는 함수
char* strcopy(char* dest, char* src) {
    char* origin = dest;

    while (*src) {
        *dest = *src;

        dest++;
        src++;
    }

    *dest = '\0';

    return origin;
}


// dest에 있는 문자열과 src에 있는 문자열을 병합해주는 함수
// dest문자열 뒤에 src의 문자열을 결합해주는 함수
char* strconcat(char* dest, char* src) {
    char* origin = dest;

    while (*dest) dest++;

    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return origin;
}

// str1문자열과 str2 문자열의 비교해서 같으면 0
// 다르면 1, -1을 리턴해주는 함수
int strcompare(char* str1, char* str2) {
    while (*str1) {
        if (*str1 != *str2) {
            if (*str1 > *str2) {
                return 1;
            }
            else {
                return -1;
            }
        }

        str1++;
        str2++;
    }

    if (*str2 == '\0') {
        return 0;
    }
    else {
        return -1;
    }
}
