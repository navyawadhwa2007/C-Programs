#include <stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of lines: ");
	scanf("%d", &n); // Read an integer from the user and store it in variable n.
	for(i=1; i<=n; i++) // Outer loop to control the number of lines, runs from 1 to n
	{
		for(j=1; j<=i; j++){ // Inner loop to print stars in each line, runs from 1 to i
			 printf("* ");	// After printing all stars in a line, move to the next line
		}   
	printf("\n");
}
	return 0;
}
