#include <stdio.h>

int main() {
    int rows; 
    int i, j; 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", i + 2 + j);
        }
        printf("\n");
    }

    return 0;
}


