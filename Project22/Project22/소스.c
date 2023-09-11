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

// ���ڿ��ȿ� ������ ������ ��� �������ִ� �Լ�
int strlength(char* str) {
    int count = 0;

    while (*str) {
        count++;
        str++;
    }

    return count;
}

// src�� �ִ� ���ڿ��� dest�� ������ �������ִ� �Լ�
char* strcopy(char* dest, char* src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
}

// dest�� �ִ� ���ڿ��� src�� �ִ� ���ڿ��� �������ִ� �Լ�
// dest���ڿ� �ڿ� src�� ���ڿ��� �������ִ� �Լ�
char* strconcat(char* dest, char* src) {
    for (int i = 0; dest[i] != 0; i++);
    for (int j = 0; src[j] != 0; j++) {
        *dest + i = src + j;
    }
    
}

// str1���ڿ��� str2 ���ڿ��� ���ؼ� ������ 0
// �ٸ��� 1, -1�� �������ִ� �Լ�
int strcompare(char* str1, char* str2) {
    for (int i = 0; str1[i] != 0; i++) {

            if (str1[i] == str2[i]) printf("1");
            else printf("0");
        }
    }
}

int main1() {
    // ����, ����, ���ڿ�
    char str[] = { 'M', 'O', 'N' };   // ���ڹ迭
    char str2[] = "MON";   // ���ڿ�
    char str3[] = { 'M', 'O', 'N', '\0' };

    int length = strlength(str3);

    printf("length = %d\n", length);


    return 0;
}