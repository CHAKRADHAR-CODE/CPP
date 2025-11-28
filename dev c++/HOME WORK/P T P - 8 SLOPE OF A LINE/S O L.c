#include <stdio.h>

int main() {
    float x1, y1, x2, y2, slope;

    // Input two points (x1, y1) and (x2, y2)
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);


    slope = (y2 - y1) / (x2 - x1);
    printf("The slope of the line is: %f\n", slope);
    

    return 0;
}

