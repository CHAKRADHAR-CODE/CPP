                                                   C - MID ANSWERS                          
UNIT - 3:
//1) 1D and 2D arrays 
=>In C,1D and 2D arrays are used to store collections of data, with the main difference being the 
number of indices required to access their elements.

#1D Array (One-dimensional array)
A collection of elements of the same data type stored at contiguous memory locations.	
#Syntax:
data_type array_name[size];

#Example:-

>#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Declaration and initialization

    // Accessing elements
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }

    return 0;
}


#2D Array (Two-dimensional array)

A 2D array is essentially an array of arrays, forming a grid (rows and columns). It requires two indices to access its elements.

#Syntax:
data_type array_name[rows][columns];
#### Example:

>#include <stdio.h>

int main() {
    int matrix[3][3] = { 
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9} 
    }; // Declaration and initialization

    // Accessing elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element at [%d][%d]: %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}

> Key Differences:
|------------------|---------------------|--------------------------|
| Aspect           | 1D Array            | 2D Array                 |
|------------------|---------------------|--------------------------|
| Structure        | Linear (single row) | Tabular (rows & columns) |
| Declaration      | data_type arr[n]    | data_type arr[m][n]      |
| Access           | arr[i]              | arr[i][j]                |	
| Storage Layout   | Contiguous          | Contiguous (row-major)   |
|------------------|---------------------|--------------------------|

...................................................................................................
/*
2) Define Searching. List the types of searching techniques. 
Write a C program to find the element in an array by using linear search.*/
=>Definition of Searching
Searching is the process of finding the location of a specific element within a collection of data (e.g., array, list).

>Types of Searching Techniques
 1)Linear Search: Sequentially checks each element until the target is found or the end of the array is reached.
 2)Binary Search: Efficient search for sorted arrays by repeatedly dividing the search interval in half.

>Linear Search Program :
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50}, key = 30;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }
    printf("Element not found\n");
    return 0;
}
>L Search Program :
#include<stdio.h>
int main(){
	int x[6]={10,20,30,40,50,60};
	int l=0,h=5,max,find=100;
	while(l<=h){
		max=(l+h)/2;
		if(x[max]==find){
			printf("element found\n");
			return 0;
		}
		else if(x[max]<find){
			l=max+1;
		}
		else{
			h=max-1;
		}
	}
	printf("element not found\n");
	return 0;
}

...................................................................................................

// 3) bubble sort and selection sort\
=>
#Bubble Sort
Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

#Selection Sort
Selection Sort repeatedly selects the smallest (or largest) element and moves it to its correct position.

#Key Differences:
|--------------------|---------------------------------------|-------------------------------------|
| Feature            | Bubble Sort                           | Selection Sort                      |
|--------------------|---------------------------------------|-------------------------------------|
| Method             | Repeatedly swaps adjacent elements.   | Finds the smallest and places it.   |
| Efficiency         | Slower on larger datasets.            | Slightly better for small datasets. |
| Best-case (O)      | O(n) (already sorted).                | O(n^2).                             |
| Worst-case (O)     | O(n^2)                                | O(n^2).                             |
|--------------------|---------------------------------------|-------------------------------------|

...................................................................................................

//4) string handling functions 
=>Here’s a simplified explanation of common **string-handling functions** in C, along with simple examples:


#1.strlen - String Length
>Purpos : Returns the length of a string (excluding the null character `\0`).

>Example:
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    printf("Length of string: %lu\n", strlen(str));
    return 0;
}
>Output:
Length of string: 5


#2.strcpy - String Copy
>Purpose: Copies one string into another.

>Example:
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "World";
    char destination[20];
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}

Output:
Copied string: World

#3.strcat - String Concatenation
>Purpose: Appends one string to the end of another.

>Example:
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}


>Output:
Concatenated string: Hello World!

#4.strcmp - String Comparison
>Purpose: Compares two strings lexicographically (returns `0` if equal, < 0 if first is less, > 0 if greater).

>Example:
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Apple";
    char str2[] = "Banana";
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("First string is less than the second\n");
    } else {
        printf("First string is greater than the second\n");
    }
    return 0;
}


>Output:
First string is less than the second

#5.strrev - String Reverse (Not part of standard library, use a custom function)
>Purpose: Reverses a string.

>Example (Custom Implementation):

#include <stdio.h>
#include <string.h>

void strrev(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[] = "Hello";
    strrev(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

>Output:
Reversed string: olleH

#6.strchr - Locate Character in String
>Purpose: Finds the first occurrence of a character in a string.

>Example:

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    char *ptr = strchr(str, 'l');
    if (ptr) {
        printf("Character found at position: %ld\n", ptr - str);
    } else {
        printf("Character not found\n");
    }
    return 0;
}
>Output:
Character found at position: 2

#7.strstr - Locate Substring
>Purpose: Finds the first occurrence of a substring in a string.
>Example:
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    char *ptr = strstr(str, "World");
    if (ptr) {
        printf("Substring found at position: %ld\n", ptr - str);
    } else {
        printf("Substring not found\n");
    }
    return 0;
}

>Output:
Substring found at position: 6
______________________________________________________________________________________________________________________________________	
UNIT - 3:
//1) functions 
=>Definition of a Function:
 A function is a block of code that performs a specific task. Functions help in modularizing a program, 
   improving reusability, and reducing code duplication.

>Function Prototype, Declaration, and Definition
1. Function Prototype:
 	i)Provides the function's name, return type, and parameters (without the body).
	ii)It informs the compiler about the function's existence before it is called.
    iii)Syntax:
    	return_type function_name(parameter_list);
    iV)Example:
    	int add(int, int);

2. Function Declaration:
	i)Similar to the prototype but typically occurs within the program after including necessary headers.
	ii)Declaration may include parameter names for clarity.
	iii)Syntax:
		return_type function_name(parameter_list);
    iV)Example:
    	int add(int a, int b);

3. Function Definition:
	i)Contains the actual implementation or body of the function.
	ii)Syntax:
		return_type function_name(parameter_list) {
    // Function body
	}
	iii)Example:
		int add(int a, int b) {
    	return a + b;
	}
>Example Program Demonstrating a Function:
#include <stdio.h>

// Function prototype
int add(int, int);

int main() {
    int num1 = 10, num2 = 20;
    
    // Function call
    int result = add(num1, num2);
    printf("Sum: %d\n", result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
...................................................................................................
// 2) Factorial Program:
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	printf("%d factorial is : %d",n,fact(n));
}
int fact(int x){
	if(x==0){
		return 1;
	}
	return x*fact(x-1);
}
...................................................................................................
//3)Fibonacci series
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
...................................................................................................
//4)swaping opf two numbers
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}


___________________________________________________________________________________________________________
unit - 5 :-

//Q2
#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *x;
    x = fopen("C:\\Users\\Lenovo\\Documents\\Downloads\\man.txt", "r");
    if (x == NULL) {
        printf("FILE NOT CONNECTED\n");
        return 1;
    }

    int vowels = 0, consonants = 0, digits = 0, special_chars = 0;
    char ch;
    
    while (1) {
        ch = fgetc(x);
        if (ch == EOF) {
            break;
        }

        // Check for vowels
        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' ||
            ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u') {
            vowels++;
        }
        // Check for consonants (only alphabetic characters that are not vowels)
        else if (isalpha(ch)) {
            consonants++;
        }
        // Check for digits
        else if (isdigit(ch)) {
            digits++;
        }
        // Otherwise, it's a special character
        else {
            special_chars++;
        }
    }

    // Print the counts
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special_chars);

    fclose(x);
    return 0;
}

