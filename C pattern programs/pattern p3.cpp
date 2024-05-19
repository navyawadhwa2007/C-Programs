#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {// Inner loop to print numbers from 1 to i in each row
         printf("%d ", j); // Print the current value of j followed by a space
      }
      printf("\n");
   }
   return 0;
}

