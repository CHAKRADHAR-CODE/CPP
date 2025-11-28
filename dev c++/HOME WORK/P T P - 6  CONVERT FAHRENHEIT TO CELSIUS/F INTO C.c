#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    
    celsius = 9.0f/5 * (fahrenheit - 32);

   
    printf("%f Fahrenheit is equal to %f Celsius\n", fahrenheit, celsius);

    return 0;
}

