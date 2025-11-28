#include <stdio.h>
int main() {
    int n,m;
    printf("Enter rows and columns of the matrix ");
    scanf("%d %d", &n,&m);
    int x[n][m];
    int i,j;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &x[i][j]);
        }
    }
    int Fact= 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < m; j++) {
            if (x[i][j] != 0) {
                Fact = 0;
                break;
            }
        }
        if (!Fact) break;
    }
    if (Fact) {
        printf("given matrix is a lower triangular \n");
    } else {
        printf(" NOT a lower triangular matrix.\n");
    }
    return 0;
}

