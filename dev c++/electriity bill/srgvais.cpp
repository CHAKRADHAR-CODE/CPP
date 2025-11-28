#include <stdio.h>

int main() {
    float units, bill = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        bill = units * 1.45;
    } 
    else if (units <= 100) {
        bill = (50 * 1.45) + ((units - 50) * 2.60);
    } 
    else if (units <= 200) {
        bill = (50 * 1.45) + (50 * 2.60) + ((units - 100) * 3.60);
    } 
    else {
        bill = (50 * 1.45) + (50 * 2.60) + (100 * 3.60) + ((units - 200) * 6.90);
    }

    printf("Total electricity bill: ? %.2f\n", bill);

    return 0;
}
