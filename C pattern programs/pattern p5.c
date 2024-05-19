#include <stdio.h>

int main() {
    int rows; 
    int i, j; 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");}
            
        }
        printf("\n");
    }

    return 0;
}


