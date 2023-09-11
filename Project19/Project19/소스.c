#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {

    int N, max, min, arr[] = 0;
    
    max = arr[0];
    min = arr[0];


    scanf("%d\n", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d ", arr[i]);
        if (max < arr[i]) max = arr[i];
        if (min < arr[i]) min = arr[i];
    }

    printf("%d %d", max, min);
    

        
        
    return 0;
        
    }


