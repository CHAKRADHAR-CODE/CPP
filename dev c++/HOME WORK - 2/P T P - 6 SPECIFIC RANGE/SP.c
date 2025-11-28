#include <stdio.h>

int main() {
    int number, lower, upper;

    
    lower = 10;
    upper = 50;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

    
    if (number >= lower && number <= upper) {
        printf("%d falls within the range of %d and %d.\n", number, lower, upper);
    } 
	else {
        printf("%d does not fall within the range of %d and %d.\n", number, lower, upper);
    }

    return 0;
}

