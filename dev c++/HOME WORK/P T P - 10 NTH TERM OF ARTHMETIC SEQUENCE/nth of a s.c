#include <stdio.h>

int main() {
    int a, d, n, nth_term;

    
    printf("Enter the first term (a1): ");
    scanf("%d", &a);
    
    printf("Enter the common difference (d): ");
    scanf("%d", &d);
    
    printf("Enter the term position (n): ");
    scanf("%d", &n);

    
    nth_term = a + (n - 1) * d;

    
    printf("The %dth term of the arithmetic sequence is: %d\n", n, nth_term);

    return 0;
}

