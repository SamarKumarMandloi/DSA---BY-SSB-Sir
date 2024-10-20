#include <stdio.h>

int main() {
    int rows, i, j, mid;

    printf("Enter an odd number of rows: ");
    scanf("%d", &rows);

    if (rows % 2 == 0) {
        printf("Number of rows must be odd.\n");
        return 1;
    }

    mid = rows / 2;

    for (i = 0; i <= mid; i++) {
        for (j = 0; j < mid - i; j++){
            printf(" ");
        }  
        for (j = 0; j < 2 * i + 1; j++){
            printf("*");
        }   
        printf("\n");
    }

    for (i = mid - 1; i >= 0; i--) {
        for (j = 0; j < mid - i; j++){
            printf(" ");
        }  
        for (j = 0; j < 2 * i + 1; j++){
            printf("*");
        }   
        printf("\n");
    }
    return 0;
}
