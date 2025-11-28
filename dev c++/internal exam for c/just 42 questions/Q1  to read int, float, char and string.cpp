//1 . accesing the values and printing
#include <stdio.h>
int main() {
    int x;
    float y;
    char z;
    char a[100];
    scanf("%d", &x);       
    scanf("%f", &y);       
    getchar();              
    scanf("%c", &z);      
    getchar();           
    scanf("%[^\n]s", a);  
    printf("\n\n");
    printf("%d   %.2f   %c   %s", x, y, z, a);
    return 0;
}
