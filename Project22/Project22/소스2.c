#include <stdio.h>

void strcopy(char* dest, char* src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
}


int main() {
    // ����, ����, ���ڿ�
    char str1[] = { 'M', 'O', 'N' };   // ���ڹ迭
    char str2[] = "MONs";   // ���ڿ�
    char str3[] = { 'M', 'O', 'N', '\0' };

    printf("str2 = %s\n", str2);

    strcopy(str1, str2);

    printf("str2 = %s", str2);


    return 0;
}