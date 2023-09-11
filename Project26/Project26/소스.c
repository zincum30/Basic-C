#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tagString {
    char* data;
    struct tagString* NextNode;
} String;

int main() {
    int isLoop = 1;
    char buff[50];

    String* pHead = NULL;

    while (isLoop) {
        printf("문자열을 입력하세요 (exit) :");
        scanf("%s", buff);

        if (strcmp("exit", buff) == 0) {
            break;
        }

        String* input = (String*)malloc(sizeof(String));
        int size = strlen(buff);

        input->data = (char*)malloc(size + 1);
        input->NextNode = NULL;

        strcpy(input->data, buff);

        if (pHead == NULL) {
            pHead = input;
        }
        else {
            String* Current = pHead;

            while (Current->NextNode != NULL) {
                Current = Current->NextNode;
            }

            Current->NextNode = input;
        }

    }

    // 출력   
    String* Current = pHead;
    int count = 0;
    while (Current != NULL) {
        printf("%d번째 문자열 %s\n", count, Current->data);

        count++;
        Current = Current->NextNode;
    }

    // 동적메모리 해제
    while (pHead != NULL) {
        Current = pHead;
        pHead = Current->NextNode;

        free(Current->data);
        free(Current);
    }

    return 0;
}