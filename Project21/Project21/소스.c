#include <stdio.h>
#include <string.h>
// ����, ����, ���ڿ�
// 123, 'A', "MONSTER" 

void PrintStr(char* str, int size) {
    for (int i = 0; i < size; i++) {
        _putch(*str);
        str++;
    }
}

int main() {
    char str[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R' };   // ���ڹ迭
    char str2[] = "MONSTER";   // ���ڿ�
    char str3[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R', '\0' };   // ���ڿ�



    printf("str = %s\n", str);
    printf("str2 = %s\n", str2);

    PrintStr(str, sizeof(str));
    printf("\n");
    PrintStr(str2, sizeof(str2));

    printf("str = %s\n", str);
    printf("str2 = %s\n", str2);

    


    return 0;
}