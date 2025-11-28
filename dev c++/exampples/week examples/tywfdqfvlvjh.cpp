#include <stdio.h>
#include <math.h>
int main()
{
 float a, b, c, discriminant, root1, root2, realPart, imaginaryPart
 // Input coefficients
 printf("Enter coefficients a, b and c: ");
 scanf("%f %f %f", &a, &b, &c);
 if (a == 0)
 {
 printf("This is not a quadratic equation (a cannot be zero).\n"
 return 0;
 }
 // Calculate the discriminant
 discriminant = b * b - 4 * a * c;
 // Check the nature of the discriminant
 if (discriminant > 0)
 {
 // Two distinct real roots
 root1 = (-b + sqrt(discriminant)) / (2 * a);
 root2 = (-b - sqrt(discriminant)) / (2 * a);
 printf("Roots are real and distinct:\n");
 printf("Root 1 = %.2f\n", root1);
 printf("Root 2 = %.2f\n", root2);
 }
 else if (discriminant == 0)
 {
 // One real root (double root)
 root1 = -b / (2 * a);
 printf("Roots are real and equal:\n");
 printf("Root = %.2f\n", root1);
 }
 else
 {
 // Complex roots
 realPart = -b / (2 * a);
 imaginaryPart = sqrt(-discriminant) / (2 * a);
 printf("Roots are complex and imaginary:\n");
 printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
 printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
 }
 return 0;
}