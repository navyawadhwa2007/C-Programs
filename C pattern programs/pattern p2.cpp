#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	
	for(i=0;i<=rows;i++)
	{
		for(j=1;j<=i;j++){ // Inner loop to print the current row number i, j times
			printf("%d ", i);// Print the current row number followed by a space
		}	
		printf("\n");
	}
 return 0;
}
