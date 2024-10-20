#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j <= rows; j++) {
            printf("%d", j);
        }
        for (int j = rows; j < rows + i - 1; j++) {
            printf("5");
        }
        printf("\n");
    }
    return 0;
}
