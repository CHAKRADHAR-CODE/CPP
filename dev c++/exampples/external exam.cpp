                                EXTERNAL EXAM C       ...................................

QUESTION 1:
A)Write a C program to print address, values, and size of the different data types.
>>>CODE:

#include <stdio.h>
int main() {
    int a = 10;
    float b = 5.5;
    double c = 15.123;
    char d = 'X';

    printf("Data Type: int\n");
    printf("Address: %p\n", (void*)&a);
    printf("Value: %d\n", a);
    printf("Size: %zu bytes\n\n", sizeof(a));

    printf("Data Type: float\n");
    printf("Address: %p\n", (void*)&b);
    printf("Value: %.2f\n", b);
    printf("Size: %zu bytes\n\n", sizeof(b));

    printf("Data Type: double\n");
    printf("Address: %p\n", (void*)&c);
    printf("Value: %.3f\n", c);
    printf("Size: %zu bytes\n\n", sizeof(c));

    printf("Data Type: char\n");
    printf("Address: %p\n", (void*)&d);
    printf("Value: %c\n", d);
    printf("Size: %zu byte\n", sizeof(d));

    return 0;
}

>>> OUTPUT :

Data Type: int
Address: 000000000065FE1C
Value: 10
Size: 4 bytes

Data Type: float
Address: 000000000065FE18
Value: 5.50
Size: 4 bytes

Data Type: double
Address: 000000000065FE10
Value: 15.123
Size: 8 bytes

Data Type: char
Address: 000000000065FE0F
Value: X
Size: 1 byte

..........................................................................................
B)Write a C program to find the given year is a leap year or not.
>>>CODE:
	
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

>>> OUTPUT :
	
Enter a year: 2000
2000 is a leap year.

..........................................................................................
C)Write a C program swap two numbers using functions (call by value).
>>>CODE:
	
#include <stdio.h>

// Function to swap two numbers
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: a = %d, b = %d\n", x, y);
    swap(x, y);
    printf("In main function after swapping: a = %d, b = %d\n", x, y);

    return 0;
}
>>> OUTPUT :
	
Enter two numbers: 5 10
Before swapping: a = 5, b = 10
After swapping: a = 10, b = 5
In main function after swapping: a = 5, b = 10

------------------------------------------------------------------------------------------

QUESTION 2:
A)Write a C program to print sum and difference of 2 numbers.
>>>CODE:
	
#include <stdio.h>

int main() {
    int num1, num2, sum, difference;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
}

>>> OUTPUT :
	
Enter two numbers: 10 20
Sum: 30
Difference: -10

..........................................................................................
B)Write a C program to find maximum of three numbers using conditional operator.
>>>CODE:
	
#include <stdio.h>

int main() {
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The maximum of the three numbers is: %d\n", max);

    return 0;
}

>>> OUTPUT :
	
Enter three numbers: 202 152 369
The maximum of the three numbers is: 369

..........................................................................................
C)Write a C program multiplication of two matrix using 2-D arrays.
>>>CODE:
	
#include<stdio.h>
int main(){
int i,j,a,b;
scanf("%d %d",&a,&b);
printf("enter 1 matrix elements %d \n",a*b);
int x[a][b];
int y[a][b];
int z[a][b];
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		scanf("%d",&x[i][j]);
	}
}
printf("enter 2 matrix elements %d \n",a*b);
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		scanf("%d",&y[i][j]);
	}
}
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		z[i][j]=x[i][j]*y[i][j];
	}
}
printf(">>> z matrix : \n");
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		printf("%d ",z[i][j]);
	}
	printf("\n");
}
return 0;
} 

>>> OUTPUT :
	
2 2
enter 1 matrix elements 4
1 2 3 4
enter 2 matrix elements 4
1 2 3 4
>>> z matrix :
1 4
9 16

------------------------------------------------------------------------------------------

QUESTION 3:
A)Write a C program to find area of circle and square.
>>>CODE:
	
#include <stdio.h>
#define PI 3.14159 // Define the value of PI

int main() {
    int choice;
    float radius, side, area;

    printf("Choose an option:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Square\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Area of Circle
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("The area of the circle is: %.2f\n", area);
            break;

        case 2:
            // Area of Square
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("The area of the square is: %.2f\n", area);
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            break;
    }

    return 0;
}

>>> OUTPUT :
	
Choose an option:
1. Area of Circle
2. Area of Square
Enter your choice (1 or 2): 1
Enter the radius of the circle: 10
The area of the circle is: 314.16

..........................................................................................
B) Write a C program to generate electricity bill.
>>>CODE:
	
#include <stdio.h>
int main() {
    int units;
    double bill = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1.50;
    } else if (units <= 200) {
        bill = 100 * 1.50 + (units - 100) * 2.00;
    } else {
        bill = 100 * 1.50 + 100 * 2.00 + (units - 200) * 3.00;
    }
    bill += 50;
    printf("Electricity Bill: Rs. %.2lf\n", bill);
    return 0;
}

>>> OUTPUT :
	
Enter the number of units consumed: 320
Electricity Bill: Rs. 760.00

..........................................................................................
C)Write a C program to find an element in array (linear search).
>>>CODE:
	
#include <stdio.h>

int main() {
    int n, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare array with dynamic size
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Perform linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            return 0; // Exit the program after finding the element
        }
    }

    printf("Element not found\n");
    return 0;
}

>>> OUTPUT :
	
Enter the number of elements in the array: 4
Enter 4 elements:
10 20 30 40
Enter the element to search for: 30
Element found at index 2

------------------------------------------------------------------------------------------

QUESTION 4:
B)Write a C program to check given number is prime or not.
>>>CODE:
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for numbers less than 2
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check divisors from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0; // Not a prime number
            break;
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

>>> OUTPUT :
	
Enter a positive integer: 50
50 is not a prime number.


..........................................................................................
C)Write a C program to access array using 1D.
>>>CODE:
	
#include <stdio.h>

int main() {
    int n, i;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare a 1D array of size n

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display elements of the array
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

>>> OUTPUT :
	
Enter the number of elements in the array: 2
Enter 2 elements:
1 2
The elements of the array are:
arr[0] = 1
arr[1] = 2
Element found at index 2

------------------------------------------------------------------------------------------

QUESTION 5:
A)Write a C program to find area of rectangle and triangle.
>>>CODE:

#include <stdio.h>

int main() {
    int choice;
    float length, width, base, height, area;

    // Menu to choose the shape
    printf("Choose an option to calculate area:\n");
    printf("1. Rectangle\n");
    printf("2. Triangle\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Area of Rectangle
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("The area of the rectangle is: %.2f\n", area);
            break;

        case 2:
            // Area of Triangle
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is: %.2f\n", area);
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            break;
    }

    return 0;
}

>>> OUTPUT :
	
Choose an option to calculate area:
1. Rectangle
2. Triangle
Enter your choice (1 or 2): 1
Enter the length and width of the rectangle: 10 20
The area of the rectangle is: 200.00

..........................................................................................
B)Write a C program given number is Armstrong or not.
>>>CODE:
	
#include <stdio.h>
#include <math.h> // For the pow() function

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Input number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the number of digits in the given number
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num; // Restore the original number

    // Check if the number is an Armstrong number
    while (originalNum != 0) {
        remainder = originalNum % 10; // Extract the last digit
        result += pow(remainder, n); // Add the nth power of the digit
        originalNum /= 10; // Remove the last digit
    }

    // If the sum of the nth powers of the digits is equal to the number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

>>> OUTPUT :
	
Enter an integer: 153
153 is an Armstrong number.

..........................................................................................
C)Write a C program to display n series of Fibonacci numbers.
>>>CODE:

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Check if the number of terms is valid
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else if (n == 1) {
        printf("Fibonacci Series: %d\n", first);
    } else {
        printf("Fibonacci Series: %d %d", first, second);

        // Generate the Fibonacci series
        for (int i = 3; i <= n; i++) {
            next = first + second;
            printf(" %d", next);
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}

>>> OUTPUT :
	
Enter the number of terms: 4
Fibonacci Series: 0 1 1 2

------------------------------------------------------------------------------------------

QUESTION 6:
A)Write a C program to print conversion of Fahrenheit to Celsius
>>>CODE:
	
#include <stdio.h>

int main() {
    float t;
    int choice;

    // Display menu
    printf("Temperature Conversion\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Perform conversion based on user choice
    switch (choice) {
        case 1:
            // Fahrenheit to Celsius
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &t);
            printf("%.2f Fahrenheit = %.2f Celsius\n", t, (t - 32) * 5 / 9);
            break;

        case 2:
            // Celsius to Fahrenheit
            printf("Enter temperature in Celsius: ");
            scanf("%f", &t);
            printf("%.2f Celsius = %.2f Fahrenheit\n", t, (t * 9 / 5) + 32);
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            break;
    }

    return 0;
}

>>> OUTPUT :
	
Temperature Conversion
1. Fahrenheit to Celsius
2. Celsius to Fahrenheit
Enter your choice (1 or 2): 1
Enter temperature in Fahrenheit: 23
23.00 Fahrenheit = -5.00 Celsius

..........................................................................................
B)Write a C program Eliminate duplicate elements from arrays.
>>>CODE:
	
#include <stdio.h>

int main() {
    int n, i, j, k, isDuplicate;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Eliminate duplicates from the array
    for (i = 0; i < n; i++) {
        isDuplicate = 0;

        // Check if arr[i] is a duplicate
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If no duplicate, print the element
        if (!isDuplicate) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}

>>> OUTPUT :
	
Enter the number of elements in the array: 6
Enter 6 elements:
10 20 20 30 30 40
10 20 30 40

..........................................................................................
C)Write a C program to transpose of matrix using 2-D arrays.
>>>CODE:	
#include <stdio.h>

int main() {
    int rows, cols;

    // Input number of rows and columns
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], transpose[cols][rows];

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding the transpose of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the transpose of the matrix
    printf("\nTranspose of Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

>>> OUTPUT :
	
Enter the number of rows and columns of the matrix: 2 3
Enter the elements of the matrix:
1 2 3
4 5 6

Original Matrix:
1 2 3 
4 5 6 

Transpose of Matrix:
1 4 
2 5 
3 6

------------------------------------------------------------------------------------------

QUESTION 7:
A) Write a C program to print conversion of Fahrenheit to Celsius and vice versa
>>>CODE:
	
#include <stdio.h>

int main() {
    float t;
    int choice;

    // Display menu
    printf("Temperature Conversion\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Perform conversion based on user choice
    switch (choice) {
        case 1:
            // Fahrenheit to Celsius
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &t);
            printf("%.2f Fahrenheit = %.2f Celsius\n", t, (t - 32) * 5 / 9);
            break;

        case 2:
            // Celsius to Fahrenheit
            printf("Enter temperature in Celsius: ");
            scanf("%f", &t);
            printf("%.2f Celsius = %.2f Fahrenheit\n", t, (t * 9 / 5) + 32);
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            break;
    }

    return 0;
}

>>> OUTPUT :
	
Temperature Conversion
1. Fahrenheit to Celsius
2. Celsius to Fahrenheit
Enter your choice (1 or 2): 1
Enter temperature in Fahrenheit: 23
23.00 Fahrenheit = -5.00 Celsius

..........................................................................................
B)Write a C program to simulate a calculator using switch case.
>>>CODE:
	
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Display options for the calculator
    printf("Simple Calculator\n");
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operator);

    // Input two numbers for the calculation
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator. Please choose +, -, *, or /.\n");
            break;
    }

    return 0;
}

>>> OUTPUT :
	
Simple Calculator
Choose an operation (+, -, *, /): +
Enter two numbers: 5 3
5.00 + 3.00 = 8.00

..........................................................................................
C)Write a C program matrix addition using 2D arrays.
>>>CODE:

#include<stdio.h>
int main(){
int i,j,a,b;
scanf("%d %d",&a,&b);
printf("enter 1 matrix elements %d \n",a*b);
int x[a][b];
int y[a][b];
int z[a][b];
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		scanf("%d",&x[i][j]);
	}
}
printf("enter 2 matrix elements %d \n",a*b);
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		scanf("%d",&y[i][j]);
	}
}
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		z[i][j]=x[i][j]+y[i][j];
	}
}
printf(">>> z matrix : \n");
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		printf("%d ",z[i][j]);
	}
	printf("\n");
}
return 0;
} 

>>> OUTPUT :
	
2 2
enter 1 matrix elements 4
1 2 3 4
enter 2 matrix elements 4
1 2 3 4
>>> z matrix :
2 4
6 8

------------------------------------------------------------------------------------------

QUESTION 8:
A)Write a C program to find compound interest and simple interest.
>>>CODE:
	
#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    double principal, rate, time, simpleInterest, compoundInterest;

    // Input principal, rate of interest, and time
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Display the results
    printf("\nSimple Interest: %.2lf\n", simpleInterest);
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}

>>> OUTPUT :
	
Enter the principal amount: 10000
Enter the rate of interest (in percentage): 5
Enter the time (in years): 2
Simple Interest: 1000.00
Compound Interest: 1025.00

..........................................................................................
B)Write a C program to find smallest number in ARRAY.
>>>CODE:
	
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x[n];
	for (int i = 0;i<n;i++){
		scanf("%d",&x[i]);
	}
	int max = x[0];
	for (int i = 0;i<n;i++){
		if (x[i]>max){
			max = x[i];
		}
	}
		int min = x[0];
		for (int i = 0;i<n;i++){
		if (x[i]<min){
			min = x[i];
		}
	}
	
	printf("maximum value of array  : %d\n",max);
	printf("maximum value of array  : %d",min);
	return 0;
	
}

>>> OUTPUT :
	
5
1 2 3 4 5
maximum value of array  : 5
maximum value of array  : 1


..........................................................................................
C)Write a C program to simulate a calculator using switch case.
>>>CODE:
	
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Display options for the calculator
    printf("Simple Calculator\n");
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operator);

    // Input two numbers for the calculation
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator. Please choose +, -, *, or /.\n");
            break;
    }

    return 0;
}

>>> OUTPUT :
	
Simple Calculator
Choose an operation (+, -, *, /): +
Enter two numbers: 5 3
5.00 + 3.00 = 8.00

------------------------------------------------------------------------------------------

QUESTION 9:
B)Write a C program sum of a 5digit number .
>>>CODE:	

#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Input a 5-digit number
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    // Validate if the input is a 5-digit number
    if (number < 10000 || number > 99999) {
        printf("Invalid input! Please enter a 5-digit number.\n");
        return 1;
    }

    // Calculate the sum of digits
    while (number != 0) {
        digit = number % 10;  // Extract the last digit
        sum += digit;         // Add it to the sum
        number /= 10;         // Remove the last digit
    }

    // Output the result
    printf("Sum of the digits: %d\n", sum);

    return 0;
}

>>> OUTPUT :
	
Enter a 5-digit number: 12345
Sum of the digits: 15

..........................................................................................
C)Write a C program to display given number in words using switch case.
>>>CODE:
	
#include <stdio.h>

int main() {
    int digit;

    // Input a single-digit number
    printf("Enter a single-digit number (0-9): ");
    scanf("%d", &digit);

    // Check if the input is within the valid range
    if (digit < 0 || digit > 9) {
        printf("Invalid input! Please enter a number between 0 and 9.\n");
        return 1;
    }

    // Use switch-case to convert the number to words
    switch (digit) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Invalid input\n"); 
            break;
    }
   return 0;
}

>>> OUTPUT :
	
Enter a single-digit number (0-9): 5
Five

------------------------------------------------------------------------------------------

QUESTION 10:
B)Write a C program to insert an element into array.
>>>CODE:
	
#include <stdio.h>

int main() {
    int n, i, arr[10], pos, elem;

    // Input the size of the array
    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position and the new element
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &elem);

    // Check if the position is valid
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    // Display the array before insertion
    printf("Array before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Shift elements to the right to make space for the new element
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos - 1] = elem;
    n++; // Increase the size of the array

    // Display the array after insertion
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

>>> OUTPUT :
	
Enter the size of the array (max 10): 5
Enter 5 elements:
1 2 3 4 5
Enter the position to insert the element: 3
Enter the element to insert: 99
Array before insertion:
1 2 3 4 5 
Array after insertion:
1 2 99 3 4 5 

..........................................................................................
C)Count number of alphabets (lowercase, uppercase, consonants,vowels) and digits 
  Lowercase to Uppercase

>>>CODE:
	
#include <stdio.h>
#include <ctype.h> // For tolower() and toupper() functions

int main() {
    char str[100];
    int i, lowercase = 0, uppercase = 0, vowels = 0, consonants = 0, digits = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Process each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (isalpha(ch)) { // Check if the character is an alphabet
            if (islower(ch)) {
                lowercase++;
                ch = toupper(ch); // Convert to uppercase
            } else {
                uppercase++;
            }

            // Check for vowels and consonants
            char lowerCh = tolower(ch);
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' 
			|| lowerCh == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) { // Check if the character is a digit
            digits++;
        }
    }

    // Display the results
    printf("\nCount of lowercase letters: %d\n", lowercase);
    printf("Count of uppercase letters: %d\n", uppercase);
    printf("Count of vowels: %d\n", vowels);
    printf("Count of consonants: %d\n", consonants);
    printf("Count of digits: %d\n", digits);

    // Convert and display the string with lowercase letters converted to uppercase
    printf("\nString with lowercase letters converted to uppercase: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            putchar(toupper(str[i]));
        } else {
            putchar(str[i]);
        }
    }

    return 0;
}

>>> OUTPUT :
	
Enter a string: Hello World! 123
Count of lowercase letters: 8
Count of uppercase letters: 2
Count of vowels: 3
Count of consonants: 7
Count of digits: 3

String with lowercase letters converted to uppercase: HELLO WORLD! 123

------------------------------------------------------------------------------------------

QUESTION 11:
A)Write a C program to display total marks and average marks.
>>>CODE:
	
#include <stdio.h>

int main() {
    int n, i;
    float marks[100], total = 0, average;

    // Input number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    // Input marks for each subject
    printf("Enter the marks for %d subjects:\n", n);
    for (i = 0; i < n; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i]; // Add marks to the total
    }

    // Calculate average
    average = total / n;

    // Display total and average
    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

>>> OUTPUT :
	
Enter the number of subjects: 3
Enter the marks for 3 subjects:
Subject 1: 85
Subject 2: 90
Subject 3: 78

Total Marks: 253.00
Average Marks: 84.33

..........................................................................................
B)Write a C program find String length, concatenate 2 strings, reverse of a string.
>>>CODE:
	
#include <stdio.h>
#include <string.h> // For built-in string functions

int main() {
    char str1[100], str2[100], concat[200], reverse[100];
    int i, length;

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character

    // Find length of the first string
    length = strlen(str1);
    printf("\nLength of the first string: %d\n", length);

    // Concatenate the two strings
    strcpy(concat, str1);     // Copy the first string to `concat`
    strcat(concat, str2);     // Append the second string to `concat`
    printf("Concatenated string: %s\n", concat);

    // Reverse the first string
    length = strlen(str1);
    for (i = 0; i < length; i++) {
        reverse[i] = str1[length - i - 1];
    }
    reverse[length] = '\0'; // Null-terminate the reversed string
    printf("Reversed first string: %s\n", reverse);

    return 0;
}

>>> OUTPUT :
	
Enter the first string: Hello
Enter the second string: World

Length of the first string: 5
Concatenated string: HelloWorld
Reversed first string: olleH

..........................................................................................
C)Write a C program to find (N Factorial) using recursion.
>>>CODE:
	
#include <stdio.h>

// Function to calculate factorial using recursion
long long factorial(int n) {
    if (n == 0 || n == 1)  // Base case: factorial of 0 or 1 is 1
        return 1;
    else
        return n * factorial(n - 1);  // Recursive case: n * factorial of (n-1)
}

int main() {
    int n;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Ensure the number is non-negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and display the factorial
        printf("Factorial of %d is %lld\n", n, factorial(n));
    }

    return 0;
}

>>> OUTPUT :
	
Enter a number: 5
Factorial of 5 is 120

------------------------------------------------------------------------------------------

QUESTION 12:
B)Write a C program to find min and max elements in array.
>>>CODE:
	
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x[n];
	for (int i = 0;i<n;i++){
		scanf("%d",&x[i]);
	}
	int max = x[0];
	for (int i = 0;i<n;i++){
		if (x[i]>max){
			max = x[i];
		}
	}
		int min = x[0];
		for (int i = 0;i<n;i++){
		if (x[i]<min){
			min = x[i];
		}
	}
	
	printf("maximum value of array  : %d\n",max);
	printf("maximum value of array  : %d",min);
	return 0;
	
}

>>> OUTPUT :
	
5
1 2 3 4 5
maximum value of array  : 5
maximum value of array  : 1

..........................................................................................
C)Write a C program to find sum of array.
>>>CODE:
	
#include<stdio.h>

int main() {
    int sum = 0, n;
    
    // Input number of elements
    scanf("%d", &n);
    
    int x[n]; // Declare an array of size 'n'
    
    // Input elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    
    // Calculate the sum of the elements
    for (int i = 0; i < n; i++) {
        sum += x[i];
    }
    
    // Output the sum
    printf("%d\n", sum);
    
    return 0;
}

>>> OUTPUT :
	
5
1 2 3 4 5

15

------------------------------------------------------------------------------------------

QUESTION 13:
B)Write a Program the given string is palindrome are not.
>>>CODE:
	
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // Ask the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number to compare later
    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0; // Corrected return statement
}

>>> OUTPUT :
	
Enter an integer: 121
121 is a palindrome.

..........................................................................................
C)Write a program Bubble Sort.
>>>CODE:
	
#include <stdio.h>

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort algorithm
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap if elements are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Output the sorted array
    printf("Sorted elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

>>> OUTPUT :
	
Enter the number of elements: 5
Enter the elements:
5 2 9 1 3

Sorted elements:
1 2 3 5 9

------------------------------------------------------------------------------------------

QUESTION 14:
B)Write a C Program to find array element using Binary search?
>>>CODE:

#include<stdio.h>

int main() {
    // Sorted array
    int x[6] = {10, 20, 30, 40, 50, 60};
    
    int l = 0, h = 5, mid, find = 100; // 'find' is the element to search
    
    // Binary search loop
    while (l <= h) {
        mid = (l + h) / 2; // Find the middle element
        
        // Check if the middle element is the one we're looking for
        if (x[mid] == find) {
            printf("Element found at index %d\n", mid);
            return 0; // Exit program after finding the element
        }
        // If the element is greater than the middle, search in the right half
        else if (x[mid] < find) {
            l = mid + 1;
        }
        // If the element is smaller than the middle, search in the left half
        else {
            h = mid - 1;
        }
    }
    
    // If element not found
    printf("Element not found\n");
    return 0;
}

>>> OUTPUT :
	
The array is sorted: [10, 20, 30, 40, 50, 60]
Searching for 30

Element found at index 2

..........................................................................................
C)Write a C Program to fine String length and String copy with outUsing string handling
  functions?
>>>CODE:
	
#include <stdio.h>

int main() {
    char source[100], destination[100];
    int length = 0, i;

    // Input the source string
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    // Calculate the length of the string manually
    while (source[length] != '\0' && source[length] != '\n') {
        length++;
    }

    // Copy the string manually to destination
    for (i = 0; i < length; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0'; // Null-terminate the copied string

    // Output the results
    printf("String length: %d\n", length);
    printf("Copied string: %s\n", destination);

    return 0;
}

>>> OUTPUT :
	
Enter a string: Hello, World!
String length: 13
Copied string: Hello, World!
	

------------------------------------------------------------------------------------------

QUESTION 15:
B) Swap two numbers using functions and pointers - call by value and reference
>>>CODE:

#include <stdio.h>

// Function for call by value (does not modify the original values)
void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swap (Call by Value): a = %d, b = %d\n", a, b);
}

// Function for call by reference (modifies the original values using pointers)
void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("After swap (Call by Reference): a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y;

    // Input the numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: a = %d, b = %d\n", x, y);

    // Swap using call by value (this does not change the original variables)
    swapByValue(x, y);
    printf("After swap using Call by Value: a = %d, b = %d\n", x, y);

    // Swap using call by reference (this modifies the original variables)
    swapByReference(&x, &y);
    printf("After swap using Call by Reference: a = %d, b = %d\n", x, y);

    return 0;
}

>>> OUTPUT :
	
Enter two numbers: 5 10

Before swap: a = 5, b = 10
After swap (Call by Value): a = 10, b = 5
After swap using Call by Value: a = 5, b = 10
After swap (Call by Reference): a = 10, b = 5
After swap using Call by Reference: a = 10, b = 5

..........................................................................................
C)Write C Program to print 1 to N Prime numbers
>>>CODE:
	
#include <stdio.h>

int isPrime(int num) {
    // A function to check if a number is prime
    if (num <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // If divisible by any number, it's not prime
        }
    }
    return 1;  // It's a prime number
}

int main() {
    int N;

    // Input the number N
    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Prime numbers from 1 to %d are:\n", N);

    // Loop through numbers from 2 to N and print primes
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

>>> OUTPUT :
	
Enter a number: 20

Prime numbers from 1 to 20 are:
2 3 5 7 11 13 17 19

_____________________________________________________________________________________________

	
