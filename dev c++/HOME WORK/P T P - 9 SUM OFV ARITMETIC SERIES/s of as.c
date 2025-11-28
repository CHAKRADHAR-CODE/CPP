#include <stdio.h>

int main() {
    int n, a, l;
    int sum;

    
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("Enter the common difference (l): ");
    scanf("%d", &l);

    // Calculate the sum of the arithmetic series
    sum = n/2*(a+l);

    // Display the result
    printf("The sum of the arithmetic series is: %d\n", sum);

    return 0;
}

