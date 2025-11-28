#include <stdio.h>

int main() {
    int n;

    // Input the size of the matrix (it should be square)
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n], trace = 0;

    // Input the matrix elements
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the trace of the matrix (sum of diagonal elements)
    for (int i = 0; i < n; i++) {
        trace += matrix[i][i];  // Add diagonal elements (i, i)
    }

    // Output the trace of the matrix
    printf("The trace of the matrix is: %d\n", trace);

    return 0;
}
 
