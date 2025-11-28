                            C IMPORTANT 4 UNITS     ............................
UNIT-4
Most IMP Questions:
#1. What is function explain its types with examples. 
A)
//function definiton
A function is a block of code designed to perform a specific task. 
It allows us to write reusable and organized code. Instead of writing the 
same code multiple times, we can call the function whenever needed.

//Types of Functions
"i)Built-in Functions

These are functions provided by the programming language, and we can use them 
directly without defining them.
>>Examples:
In C: printf(), scanf(), strlen().

>>Example in C:
#include <stdio.h>
int main() {
    printf("Hello, World!");
    return 0;
}

>>Output:
Hello, World!

"ii)User-defined Functions
These are functions that we create to perform specific tasks in our program.

>>Example in C:
#include <stdio.h>
// Function definition
void greet() {
    printf("Hello from the function!\n");
}
int main() {
    greet(); // Function call
    return 0;
}

>>Output:
Hello from the function!

//Summary :
Functions make code reusable and organized.
Types: Built-in, User-defined, Library, and Recursive functions.

................................................................................

#2. What is recursion. WAP factorial of number using recursion.  
A)
//What is Recursion?
Recursion is a programming technique where a function calls itself to solve 
a problem. It breaks a big problem into smaller, similar problems until it 
reaches a base condition (stopping point).  

//Factorial Using Recursion in 

#include <stdio.h>
// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0) // Base case
        return 1;
    return n * factorial(n - 1); // Recursive call
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", number, factorial(number));

    return 0;
}

>>Output:
Enter a number: 5
Factorial of 5 is 120

................................................................................

#3. Types of Arguments and Explain Array as Parameter. 
A)
Types of Arguments in Functions
Arguments are the values passed to a function when it is called. 
In C, there are two main types of arguments:

"1.Actual Arguments
These are the values or variables passed to the function during 
a function call.

>>Example:
int sum(int a, int b); // Function declaration
int main() {
    int result = sum(5, 10); // 5 and 10 are actual arguments
    return 0;
}

"2.Formal Arguments
These are the parameters defined in the function header that receive the values of actual arguments.

>>Example:
int sum(int a, int b) { // a and b are formal arguments
    return a + b;
}

//Array as Parameter
In C, arrays can be passed to functions as arguments. When an array is passed, 
only the **reference (address)** of the array is passed, not a copy of the 
array. This means any changes made to the array inside the function will 
affect the original array.

#include <stdio.h>

// Function to print elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printArray(numbers, size); // Passing array to function

    return 0;
}

................................................................................

#4. What is storage class and explain its types.
A)
//STORAGE CLASS .
Storage classes in C define the scope, lifetime, visibility, and default initial
 value of variables. The main storage classes in C are:
1) Automatic (auto)
2) Register (register)
3) Static (static)
4) External (extern)

"1. Automatic Storage Class (auto)

"Scope": Local to the block where it is defined.
"Lifetime": Until the block/function ends.
"Default Value": Garbage value.
"Keyword": auto (optional, as it is the default for local variables).

>>Example:
#include <stdio.h>
void autoExample() 
{
 auto int x = 10; // 'auto' is optional
 printf("Automatic variable x = %d\n", x);
}
int main() 
{
 autoExample();
 return 0;
}

>>Output:
Automatic variable x = 10

"2. Register Storage Class (register)

"Scope": Local to the block where it is defined.
"Lifetime": Until the block/function ends.
"Default Value": Garbage value.
"Keyword": register.
"Purpose": Suggests storing the variable in a CPU register for faster access.

>>Example:
#include <stdio.h>
void registerExample() 
{
 register int x = 5; // Suggest to store 'x' in a CPU register
 printf("Register variable x = %d\n", x);
}
int main() 
{
 registerExample();
 return 0;
}

>>Output:
Register variable x = 5

"3. Static Storage Class (static)

"Scope": Local to the block where it is defined (for local variables) or global 
(for global variables).
"Lifetime": Throughout the program's execution.
"Default Value": 0 for numeric types.
"Keyword": static.
"Purpose": Retains its value between function calls.

>>Example:
#include <stdio.h>
void staticExample() 
{
 static int x = 0; // Static variable retains value between calls
 x++;
 printf("Static variable x = %d\n", x);
}
int main() 
{
 staticExample();
 staticExample();
 staticExample();
 return 0;
}

>>Output:
Static variable x = 1
Static variable x = 2
Static variable x = 3

"4. External Storage Class (extern)

"Scope": Global (accessible across multiple files).
"Lifetime": Throughout the program's execution.
"Default Value": 0 for numeric types.
"Keyword": extern.
"Purpose": Declare a global variable or function defined in another file.

>>Example (with two files):
File1.c:
#include <stdio.h>
int x = 10; // Global variable
void display() 
{
 printf("Value of x = %d\n", x);
}
File2.c:
#include <stdio.h>
#include "File1.c"
extern int x; // Declare global variable
void display();
int main() 
{
 printf("Accessing x in another file: %d\n", x);
 display();
 return 0;
}

>>Output:
Accessing x in another file: 10
Value of x = 10

................................................................................

#6. Decimal to Binary Program?
A)
//Decimal to Binary Conversion Program in C
This program converts a decimal number (base 10) into its binary equivalent 
(base 2).

#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32]; // Array to store binary digits
    int i = 0;

    // Loop to convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2; // Store remainder (binary digit)
        n = n / 2;         // Divide the number by 2
        i++;
    }

    // Print binary digits in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int number;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &number);

    // Handle edge case for 0
    if (number == 0) {
        printf("Binary: 0\n");
    } else {
        decimalToBinary(number);
    }

    return 0;
}

>>Output:
Enter a decimal number: 10
Binary: 1010

________________________________________________________________________________________