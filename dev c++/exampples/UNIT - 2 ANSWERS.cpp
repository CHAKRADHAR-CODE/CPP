                            C IMPORTANT 2 UNITS      ............................
UNIT-2
Most IMP Questions:
#1.What is conditional statement explain its types. 
A)
//Conditional Statement:
A conditional statement is used in programming to make decisions based on a 
condition or set of conditions. It allows the program to execute certain blocks 
of code depending on whether the condition evaluates to true or false.	   

//Types of Conditional Statements

1. if Statement:
Use "if" to specify a block of code to be executed,
if a specified condition is true

>>Syntax:
if (condition) {
    // Code to execute if condition is true
}

>>Example:
#include<stdio.h>
int main(){
	int age = 20;
	if (age >= 18) {
    printf("You are eligible to vote.\n");
    }
	return 0;
}

>>OUTPUT :
You are eligible to vote.


2. if-else Statement:
Use "else" to specify a block of code to be executed, if the same condition is
false 

>>Syntax:
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}

>>Example:
#include<stdio.h>
int main(){
	int number = 5;
	if (number % 2 == 0) {
	printf("Even number\n");
	}
	else {
    printf("Odd number\n");
	}
	return 0;	
}

>>OUTPUT :
Odd number


3. if-else if Ladder:
Use else "if" to specify a new condition to test,if the first condition is false
 
>>Syntax:
if (condition1) {
    // Code for condition1
} else if (condition2) {
    // Code for condition2
} else {
    // Code if none of the conditions are true
}

>>Example:
#include<stdio.h>
int main(){
	int marks = 85;
	if (marks >= 90) {
    printf("Grade: A\n");
	} 
	else if (marks >= 75) {
    printf("Grade: B\n");
	} 
	else {
    printf("Grade: C\n");
	}
	return 0;	
}

>>OUTPUT :
Grade: B


4. switch Statement :
Instead of writing many if..else statements, you can use the switch statement.
 
>>Syntax:
switch (expression) {
    case value1:
        // Code for value1
        break;
    case value2:
        // Code for value2
        break;
    default:
        // Code if no cases match
}

>>Example:
#include<stdio.h>
int main(){
int day = 3;
switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    default:
        printf("Invalid day\n");
}
	return 0;	
}

>>OUTPUT :
Wednesday


### **Summary**
|---------------|-------------------------------------------------------|
|     Type      |               Usage                                   |
|---------------|-------------------------------------------------------|
| if            | Executes a block of code if a condition is true.      |          
| else          | Adds an alternative block if the condition is false.  |
| if-else if    | Evaluates multiple conditions sequentially.           |
| switch`       | Evaluates a variable against multiple constant values.|  
|---------------|-------------------------------------------------------|

................................................................................                                    
#2. What is switch statement and Write a Calculator program using arithmetic 
    operators. 
A)
//switch Statement :
Instead of writing many if..else statements, you can use the switch statement.
 
>>Syntax:
switch (expression) {
    case value1:
        // Code for value1
        break;
    case value2:
        // Code for value2
        break;
    default:
        // Code if no cases match
}	

// code to perform a Calculator program using arithmetic operators.	
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt the user for input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch statement to perform the operation
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
            printf("Invalid operator.\n");
    }

    return 0;
}

>>OUTPUT :	 
Enter an operator (+, -, *, /): +
Enter two numbers: 10 20
10.00 + 20.00 = 30.00

................................................................................

#3. Write a Program Quartic equation?
A)
//Discription :
C program to solve a quartic equation formula = ax^4 + bx^3 + cx^2 + dx + e = 0
numerically using the trial-and-error (brute force) method. This approach avoids
using additional functions.
// code :
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, e;  // Coefficients of the equation
    double x, step = 0.001;  // Variable x and the step size for trial
    double value;  // Holds the evaluated result of the equation

    // Input coefficients
    printf("Enter coefficients a, b, c, d, e (a != 0):\n");
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);

    // Brute force to find a root
    for (x = -1000; x <= 1000; x += step) {
        value = a * pow(x, 4) + b * pow(x, 3) + c * pow(x, 2) + d * x + e;
        if (fabs(value) < 1e-3) {  // If close to zero, we found a root
            printf("Root found: x = %.3f\n", x);
            break;
        }
    }

    if (fabs(value) >= 1e-3) {
        printf("No roots found in the range -1000 to 1000.\n");
    }

    return 0;
}
>>OUTPUT :
Enter coefficients a, b, c, d, e (a != 0):
1 2 3 4 5
No roots found in the range -1000 to 1000.

................................................................................

#4.Explain the Break, Continue and go to with an example
A)
//Break, Continue, and Goto in C
These are control flow statements used to manage the execution of loops 
or blocks of code.

==>When to Use:-
"Break"  : When you need to terminate a loop early.
"Continue": To skip specific iterations in a loop.
"Goto" : Avoid unless absolutely necessary (e.g., exiting deeply nested loops).


//1. Break Statement :
>>The break statement is used to exit a loop or terminate a switch statement 
immediately, regardless of the loop's condition.

>>Syntax:
break;

>>Example:
#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Exit the loop when i is 5
        }
        printf("%d ", i);
    }
    return 0;
}

>>OUTPUT :
1 2 3 4

//2. Continue Statement :
>>The continue statement skips the remaining statements in the current 
iteration and jumps to the next iteration of the loop.

>>Syntax:
continue;

>>Example:
#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skip the iteration when i is 5
        }
        printf("%d ", i);
    }
    return 0;
}


>>OUTPUT :
1 2 3 4 6 7 8 9 10

//3. Goto Statement :
>>The goto statement is used to transfer control to a labeled statement within 
the same function. It is generally discouraged because it can make code harder
to read and maintain.

>>Syntax:
goto label;
...
label: 
    // Code here


>>Example:
#include <stdio.h>
int main() {
    int num = 0;

    start:  // Label
    num++;
    printf("%d ", num);

    if (num < 5) {
        goto start;  // Go back to the label
    }

    return 0;
}

>>OUTPUT :
1 2 3 4 5

................................................................................

#5.Write a C program Armstrong Number ?
A)
// code hear :
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

>>OUTPUT 1:
Enter an integer: 153
153 is an Armstrong number.

>>OUTPUT 2:
Enter an integer: 123
123 is not an Armstrong number.

................................................................................

6.Print a Pattern Program like this
   1
   2 3
   4 5 6
A)
// code hear :
#include <stdio.h>

int main() {
    int n, num = 1;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print the pattern
    for (int i = 1; i <= n; i++) { // Outer loop for rows
        for (int j = 1; j <= i; j++) { // Inner loop for columns
            printf("%d ", num);
            num++; // Increment the number
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}

>>OUTPUT 1:
Enter the number of rows: 3
1
2 3
4 5 6

>>OUTPUT 2:
Enter the number of rows: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
______________________________________________________________________________________                                  						                                    