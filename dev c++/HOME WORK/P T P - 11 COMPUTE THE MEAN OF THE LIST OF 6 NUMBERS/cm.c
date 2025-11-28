#include <stdio.h>

int main() {
    int a,b,c,d,e,f,sum,mean;

    
    printf("Enter 1 value: ");
    scanf("%d", &a);
    
    printf("Enter 2 value: ");
    scanf("%d", &b);
    
    printf("Enter 3 value: ");
    scanf("%d", &c);
    
    printf("Enter 4 value: ");
    scanf("%d", &d);
    
    printf("Enter 5 value: ");
    scanf("%d", &e);
    
    printf("Enter 6 value: ");
    scanf("%d", &f);
    
    sum = a+b+c+d+e+f;
    
    mean = sum/6;


   
    printf("the Mean of a List of 6 Numbers : %d",mean);

    return 0;
}

