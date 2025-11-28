                                                   C - MID ANSWERS                          
UNIT - 3:
//1).A) What is an array? How to declare and initialize the array with an example.

 =>Array: A collection of elements of the same data type stored at contiguous memory locations.	
 ##Declaration and Initialization:
 	int arr[5] = {1, 2, 3, 4, 5}; // Declaration and initialization
 	
>Example Program:
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
>Output :
	1 2 3 4 5
...................................................................................................
//B) List any 2 String Handling functions with syntax and example program.

=> Here are 2 String Handling functions with syntax and examples:

1.strcpy (String Copy)
Purpose: Copies the content of one string to another.
>Syntax:
	strcpy(destination, source);

2.strlen (String Length)
>Purpose: Returns the length of a string (excluding the null character).
>Syntax:
	size_t strlen(string);

>Example Program:	
#include <stdio.h>
#include <string.h>
int main() {
    char str1[20], str2[20] = "Hello";
    strcpy(str1, str2);
    printf("Copied String: %s\n", str1);
    printf("Length: %lu\n", strlen(str1));
    return 0;
}
>Output :
	Copied String: Hello
    Length: 5

||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
                                                (or)
//2.	A) Define a 2D array. Write a C program to perform addition of two matrices.
=> 2D Array: An array of arrays used to store data in rows and columns.

>Matrix Addition Program:
#include <stdio.h>
int main() {
    int a[2][2] = {{1, 2}, {3, 4}}, b[2][2] = {{5, 6}, {7, 8}}, sum[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
B) Define Searching. List the types of searching techniques. 
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

______________________________________________________________________________________________________________________________________	
	
UNIT-4:
//3.	A) Define a Function? Write about function prototype, declaration and definition with syntax.
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

//B. What is actual arguments and formal arguments? List and explain the parameter passing techniques.
=>Actual Arguments and Formal Arguments
1)Actual Arguments:
    i)These are the values or expressions passed to a function when it is called.
    ii)They exist in the calling function.
    iii)Example:
    	add(10, 20); // 10 and 20 are actual arguments

2)Formal Arguments:
	i)These are the variables declared in the function definition that receive the actual arguments.
	ii)They exist in the called function.
	iii)Example:
		int add(int a, int b) { // a and b are formal arguments
    	return a + b;
	}
=>Parameter Passing Techniques;
1)Call by Value
	i)A copy of the actual arguments is passed to the function.
	ii)Changes made inside the function do not affect the original arguments.
	iii)Example:
		#include <stdio.h>
		void changeValue(int x) {
    		x = 100; // Modifies local copy
		}
		int main() {
    		int num = 50;
    		changeValue(num);
    		printf("num: %d\n", num); // Output: 50
    	return 0;
		}
2)Call by Reference
	i)The address of the actual arguments is passed to the function.
	ii)Changes made inside the function affect the original arguments.
	iii)Example:
		#include <stdio.h>
		void changeValue(int *x) {
    		*x = 100; // Modifies original variable
		}
		int main() {
   			int num = 50;
    		changeValue(&num);
    		printf("num: %d\n", num); // Output: 100
    		return 0;
		}
3)Call by Pointer (A variant of Call by Reference)
	i)Similar to call by reference but explicitly uses pointers to pass data.
	ii)The function can directly modify the value by dereferencing the pointer.
	iii)Example:
		#include <stdio.h>
		void swap(int *a, int *b) {
    		int temp = *a;
    		*a = *b;
    		*b = temp;
		}
		int main() {
   			int x = 10, y = 20;
    		swap(&x, &y);
    		printf("x: %d, y: %d\n", x, y); // Output: x: 20, y: 10
    		return 0;
		}

||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
                                                (or)

//4.A) What is a recursion? Write a C program to find the factorial of a given number using recursion.
=>Recursion: A function calling itself.

Factorial Program:
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int r = fact(n);
	printf("%d factorial is : %d",n,r);
}
int fact(int x){
	if(x==0){
		return 1;
	}
	return x*fact(x-1);
}

//B)Write a C Program to pass an array as a parameter to a function.
#include <stdio.h>
int d(int num[],int m){
	for(int i=0;i<m;i++){
		printf("%d ",num[i]);
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	d(x,n);
	return 0;
}

______________________________________________________________________________________________________________________________________	
	
UNIT-5:
//5.A) What is a Pointer? Write the purpose of address reference operator and dereference operator with an example program.
=>Pointer: A variable storing the address of another variable.
	i)Address Operator (&): Gets address of a variable.
	ii)Dereference Operator (*): Accesses the value at the address.
>Example Program:
#include <stdio.h>
int main() {
    int x = 10, *ptr = &x;
    printf("Address: %p\n", ptr);
    printf("Value: %d\n", *ptr);
    return 0;
}

//B) Write a C program to read and display an array using pointers.
=>
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int *ptr = arr;
    for (int i = 0; i < n; i++){
    	printf("%d ", *(ptr+i));
	}
    return 0;
}
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
                                                (or)

//6.A) What is command-line arguments? Explain how to access the command-line arguments with an example program.
//B) Write a C program to copy the content from one file to another file.
#include<stdio.h>
int main(){
    FILE *x,*y;
    x = fopen("D:\\text files\\ROHIT_WEDS_CSE.txt","r");
    y = fopen("D:\\text files\\FILE.txt","w+");
	if(x == NULL){
        printf("FILE NOT CONNECTED\n");  
        return 1;
    }

    char ch;
    while(1){
    	ch=fgetc(x);
       
        if(ch == EOF){
            break;
        }
        fputc(ch, y);
    }
    printf("ANNA FILE COPY IEPOENDHE\n");
    fclose(x);
    fclose(y);
    return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------              
                                                    

		


	
	
	
	
	