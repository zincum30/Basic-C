#include <stdio.h>

int main() {

    int N = 0;
    printf("N: ");
    scanf_s("%d", &N);
 

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}