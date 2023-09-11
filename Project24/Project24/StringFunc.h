#pragma once //


// ���ڿ��ȿ� ������ ������ ��� �������ִ� �Լ�
int strlength(char* str) {
    int count = 0;

    while (*str) {
        str++;
        count++;
    }

    return count;
}


// src�� �ִ� ���ڿ��� dest�� ������ �������ִ� �Լ�
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


// dest�� �ִ� ���ڿ��� src�� �ִ� ���ڿ��� �������ִ� �Լ�
// dest���ڿ� �ڿ� src�� ���ڿ��� �������ִ� �Լ�
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

// str1���ڿ��� str2 ���ڿ��� ���ؼ� ������ 0
// �ٸ��� 1, -1�� �������ִ� �Լ�
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
