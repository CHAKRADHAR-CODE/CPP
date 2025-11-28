                            C IMPORTANT 1 UNITS     ............................
UNIT-1
Most IMP Questions:
#1)Explain the basic structure of c program with an example.
A)
>>>Structure of a C Program:
1. Documentation Section:
   Comments explaining the purpose of the program.
   /*Documentation Section: 
 Program Name: Program to find the area of circle
 Author: M.Srinu
 Date : 12/09/2024
 Time : 10 AM 
*/

2. Link Section:
   Includes header files that provide access to predefined functions.
=>Example:
#include<stdio.h> //link section
#include<conio.h> //link section

3. Definition Section:
   Defines constants or macros.
   #define PI 3.14 //definition section

4. Global Declaration Section:
   Declares global variables (accessible throughout the program).
   float area; //global declaration section

5. main() Function Section: 
   Contains the main logic of the program.
   {
 float r; //declaration part
 printf("Enter the radius of the circle\n"); //executable part start here 
 scanf("%f",&r);
 area=PI*r*r;
 printf("Area of the circle=%f \n",area);
 message();
}

6. Subprogram Section: 
   Includes user-defined functions (not used in this simple example as per the
   requirement).
   void message()
   {
   printf("This Sub Function \n");
   printf("we can take more Sub Function \n");
   }
>>>Example: Add Two Numbers
Program-001:
/*Documentation Section: 
 Program Name: Program to find the area of circle
 Author: M.Srinu
 Date : 12/09/2024
 Time : 11 AM 
*/
#include<stdio.h> //link section
#include<conio.h> //link section
#define PI 3.14 //definition section
float area; //global declaration section
void message();
int main()
{
 float r; //declaration part
 printf("Enter the radius of the circle\n"); //executable part 
 scanf("%f",&r);
 area=PI*r*r;
 printf("Area of the circle=%f \n",area);
 message();
}
void message()
{
 printf("This Sub Function \n");
 printf("we can take more Sub Functions \n");
}
................................................................................
#2)Time and Space complexity Algorithm.
A)
//Time Complexity :
=>Time complexity measures the amount of time an algorithm takes to complete as 
  a function of the input size.
=>It describes the growth rate of the algorithm's running time as the input
  increases.
=>Example:  
  - O(1): Constant time (doesn’t depend on input size).
  - O(n): Linear time (runs in proportion to the input size).
  - O(n^2): Quadratic time (runs in proportion to the square of input size).

//Space Complexity :
=>Space complexity measures the amount of memory an algorithm uses as a 
  function of the input size.
=>It describes how the memory requirements grow with the input size.
=>Example:
  - O(1): Constant space (uses a fixed amount of memory).
  - O(n): Linear space (memory usage grows with input size).

//Example:
For an algorithm that loops through a list of size (n):
- Time Complexity: O(n)
- Space Complexity: O(1) if only a few variables are used.

................................................................................
#3)Explain Top down Bottom Approach.
A)
//Top-Down and Bottom-Up Approaches

1. Top-Down Approach:**
>>>Starts from the bigger picture and breaks it down into smaller, more 
   manageable parts.
>>>Often associated with recursion, where the problem is solved by 
  solving smaller subproblems.
>>>The focus is on dividing the problem and solving subproblems as needed.

**Example (Factorial using recursion):**
#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1; // Base case
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
//2. Bottom-Up Approach:
>>>Starts from the smaller components and builds up to solve the bigger problem.
>>>Often associated with iteration and dynamic programming.
>>>The focus is on combining smaller solutions to form the final solution.

**Example (Factorial using iteration):**
#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
//Key Differences:
- Top-Down: Think big first, break down later.
- Bottom-Up: Build from the ground up. 
................................................................................
#4)What is algorithm and flow chart using (die tool)
A) 
>>>Algorithm:
An algorithm is a step-by-step process, or a set of rules designed to perform
a specific task or solve a particular problem. Algorithms serve as a blueprint
for writing code, guiding the program through a sequence of operations to 
achieve a desired outcome.
	
>>>>Characteristics of an Algorithm:
>/*Input*/        : The algorithm takes zero or more inputs.
>/*Output*/       : The algorithm produces one or more outputs.
>/*Definiteness*/ : Each step of the algorithm is clear and unambiguous.
>/*Finiteness*/   : The algorithm must terminate after a finite number of steps.
>/*Effectiveness*/: Each step of the algorithm is basic enough to be performed, 
                    ideally by a computer

#Examples:
>Algorithm-1: Addition of Two Numbers
Step-1: Start
Step-2: Input: Read two numbers, num1 and num2.
Step-3: Process: Calculate the sum of the two numbers by performing the 
        operation:
        sum = num1 + num2
Step-4: Output: Display or return the result, sum.
Step-5: End

................................................................................
#5.Explain types of operators Explain specific (any 3) operators with example. 
A)
>>>
//Types of Operators
Operators in programming are symbols or keywords used to perform operations on 
variables and values. They are broadly categorized into:

>>"Arithmetic Operators": Perform basic mathematical operations.
Example: +, -, *, /, %

>>"Relational (Comparison) Operators": Compare two values and return a boolean
 result.
Example: ==, !=, <, >, <=, >=

>>"Logical Operators": Used to perform logical operations.
Example: &&, ||, !

>>"Bitwise Operators": Operate on bits of a number.
Example: &, |, ^, ~, <<, >>

>>"Assignment Operators": Assign values to variables.
Example: =, +=, -=, *=, /=

>>"Unary Operators": Operate on a single operand.
Example: ++, --, -, +

>>"Ternary Operator": A conditional operator (? :).
Example: condition ? expr1 : expr2

>>"Special Operators": Include sizeof, comma ,, and pointer operators (*, &).

//Specific Examples of Operators
1. Arithmetic Operator ("+")
The addition operator adds two numbers.
>>Example :
#include <stdio.h>
int main() {
    int a = 10, b = 20;
    int sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}
>>Output: 
Sum: 30

2. Relational Operator (">")
The greater-than operator checks if one value is greater than another.
>>Example (C):
#include <stdio.h>
int main() {
    int a = 15, b = 10;
    if (a > b) {
        printf("a is greater than b\n");
    }
    return 0;
}
>>Output: 
a is greater than b

3. Logical Operator ("&&")
The logical AND operator returns true if both conditions are true.
>>Example :
#include <stdio.h>
int main() {
    int x = 5, y = 10;
    if (x > 0 && y > 0) {
        printf("Both x and y are positive numbers\n");
    }
    return 0;
}
>>Output: 
Both x and y are positive numbers

................................................................................

#6. What is typecasting? explain its types. Differentiate between typecasting 
    and type conversion.
A) 
//Type Conversion, and Casting:
Conversion of the value of one data type to another type is known as 
type conversion.

>>There are two types of conversion in C:
• Implicit Conversion (automatically)
• Explicit Conversion (manually)

//1) Implicit Conversion:
>>Implicit Type Conversion is also known as 'automatic type conversion'.It is 
done by the compiler on its own, without any external trigger from the user.

>>In implicit typecasting, the conversion involves a smaller data type to the
 larger data type.
 
** FLOW CHART :-

char -----> short -----> int -----> long -----> float -----> double

>>EXAMPLE :   
#incude<stdio.h>
int main(){
	int x=10;
	char y='a';
	float z;
	x=x+y;   //y value of a = 97
	z=x+1.0;
	printf("x=%d , z=%f",x,z);
	return 0
}
>OUTPUT :
x=107 , z=108.000000   

//2)Explicit Conversion:
>>This conversion is done by user. This is also known as typecasting. 

>>In this one data type is converted into another data type forcefully by
  the user. 
  
>>In explicit typecasting, the conversion involves a larger data type to the
  smaller data type.   
  
** FLOW CHART :-

char <----- short <----- int <----- long <----- float <----- double

>>EXAMPLE:
#include<stdio.h>
int main(){
	float x=1.2;
	int sum;
	sum =(int)x+1;
	printf("Sum = %d",sum);
	return 0;
}
>OUTPUT :
Sum = 2

