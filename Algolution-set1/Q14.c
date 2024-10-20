#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for (int i = 1; i <= rows; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= cols; j++) {
                printf("%d", j);
            }
        } 
        else {
            for (int j = cols; j >= 1; j--) {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}
