#include <stdio.h>

int main() {
    float radius, perimeter;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the perimeter (circumference)
    perimeter = 2 * 3.142 * radius;

    // Output the result
    printf("The perimeter of the circle is: %f", perimeter);

    return 0;
}
