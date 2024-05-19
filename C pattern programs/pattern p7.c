#include <stdio.h>

int main() {
    int rows; 
    int i, j, num=5; 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", num - j);
        }
        printf("\n");
    }

    return 0;
}


