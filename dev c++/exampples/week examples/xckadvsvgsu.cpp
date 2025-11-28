#include <stdio.h>

int main() 
{
    int n, i, j;

    // Input the height of the pyramid
    printf("Enter the number of rows:\n");
    scanf("%d", &n);

    // Outer loop to handle the number of rows (height of the pyramid)
    for (i = 1; i <= n; i++) 
	{
        // Loop for spaces before the numbers
        for (j = 1; j <= n - i; j++) 
		{
            printf(" ");
        }

        // Loop for printing numbers in the pyramid
        for (j = 1; j <= (2 * i - 1); j++) 
		{
            printf("%d", i);
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}


