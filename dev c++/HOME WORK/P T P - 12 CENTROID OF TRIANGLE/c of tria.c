#include <stdio.h>
int main() {
    float x1,x2,x3,y1,y2,y3,x,y;

    
    printf("Enter the coordinates of point x values : ");
    scanf("%f %f %f", &x1, &x2,&x3);

    printf("Enter the coordinates of point y values : ");
    scanf("%f %f %f", &y1, &y2, &y3);
    
    x=(x1+x2+x3)/3;
    y=(y1+y2+y3)/3;
    

    printf("The centroid of the triangle is at (%f, %f)\n", x, y);

    return 0;
}
