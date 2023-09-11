#include <stdio.h>

void strcopy(char* dest, char* src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
}


int main() {
    // 숫자, 문자, 문자열
    char str1[] = { 'M', 'O', 'N' };   // 문자배열
    char str2[] = "MONs";   // 문자열
    char str3[] = { 'M', 'O', 'N', '\0' };

    printf("str2 = %s\n", str2);

    strcopy(str1, str2);

    printf("str2 = %s", str2);


    return 0;
}