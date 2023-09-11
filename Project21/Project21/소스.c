#include <stdio.h>
#include <string.h>
// 숫자, 문자, 문자열
// 123, 'A', "MONSTER" 

void PrintStr(char* str, int size) {
    for (int i = 0; i < size; i++) {
        _putch(*str);
        str++;
    }
}

int main() {
    char str[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R' };   // 문자배열
    char str2[] = "MONSTER";   // 문자열
    char str3[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R', '\0' };   // 문자열



    printf("str = %s\n", str);
    printf("str2 = %s\n", str2);

    PrintStr(str, sizeof(str));
    printf("\n");
    PrintStr(str2, sizeof(str2));

    printf("str = %s\n", str);
    printf("str2 = %s\n", str2);

    


    return 0;
}