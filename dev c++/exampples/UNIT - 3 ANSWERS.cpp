                            C IMPORTANT 3 UNITS      ............................
UNIT-3
Most IMP Questions:
#1)What is array explain types of array 2D,3D with example. 
=>
>>What is an Array?
An array is a collection of elements, all of the same type, stored in contiguous 
memory locations and accessed using an index.

>>Types of Arrays:
"1. 1D Array (One-Dimensional Array):
A 1D array is a simple list of elements. It is accessed with a single index.

>>Example:
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // 1D array with 5 elements
    
    // Accessing elements
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }

    return 0;
}

>>Output:
Element 0: 1
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5


"2. 2D Array (Two-Dimensional Array)
A 2D array is a collection of arrays, which can be thought of as a matrix 
(rows and columns).	
>>Example:
#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};// 2D array with 2 rows and 3 columns
    
    // Accessing elements
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Element at [%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}


>>Output:
Element at [0][0]: 1
Element at [0][1]: 2
Element at [0][2]: 3
Element at [1][0]: 4
Element at [1][1]: 5
Element at [1][2]: 6

................................................................................

#2)WAP to find Min, Max number in ARRAY.
A)
//code to find min and max in a given array.
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
	
	printf("maximum value of array %d",max);
	printf("maximum value of array %d",min);
	return 0;
}

>>Output:
5
10 20 30 10 50
maximum value of array  : 50
maximum value of array  : 10

................................................................................

#3. WAP to find transpose of the Matrix. 
A)
// code to transpoce the matric
#include <stdio.h>

int main() {
    int rows, cols;

    // Input the number of rows and columns for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols], transpose[cols][rows];  // Matrix and its transpose

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the transpose of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];  // Swapping rows and columns
        }
    }

    // Output the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Output the transposed matrix
    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

>>Output:
Enter the number of rows: 3
Enter the number of columns: 3
Enter the elements of the matrix:
10 20 30 40 50 60 470 80 90

Original Matrix:
10 20 30
40 50 60
470 80 90

Transpose of the Matrix:
10 40 470
20 50 80
30 60 90

................................................................................

#4)what is string explain string handling functions (any 2) with example.
A)
 
//What is a String?
In C, a string is an array of characters terminated by a null character ('\0'). 
Strings are used to represent text and are typically enclosed in double quotes 
(" "). For example, "Hello" is a string.

//string Handling Functions in C
1. strlen()  
   Returns the length of the string (excluding the null-terminator).

>>Syntax:  
size_t strlen(const char *str);


>>Example:
char str[] = "Hello";
printf("%lu\n", strlen(str));  // Output: 5

2. strcpy()  
Copies one string to another.

>>Syntax:  
char *strcpy(char *dest, const char *src);

>>Example:
   char src[] = "Hello";
   char dest[10];
   strcpy(dest, src);
   printf("%s\n", dest);  // Output: Hello

3. strcat()
Concatenates (appends) one string to the end of another.

>>Syntax:
char *strcat(char *dest, const char *src);

>>Example:
char str1[20] = "Hello";
char str2[] = " World";
strcat(str1, str2);
printf("%s\n", str1);  // Output: Hello World

4. strcmp()
Compares two strings lexicographically.

>>Syntax:
int strcmp(const char *str1, const char *str2);

>>Example:
char str1[] = "Apple";
char str2[] = "Banana";
printf("%d\n", strcmp(str1, str2));  // Output: -1 (since 'A' < 'B')

5.strchr()
Finds the first occurrence of a character in a string.

>>Syntax:
char *strchr(const char *str, int ch);

>>Example:
char str[] = "Hello";
char *ptr = strchr(str, 'e');
printf("%s\n", ptr);  // Output: ello

/*
>>>Summary
strlen(): Length of the string.
strcpy(): Copy one string to another.
strcat(): Concatenate two strings.
strcmp(): Compare two strings.
strchr(): Find first occurrence of a character.
*/

................................................................................

#6.Write a C Program Duplicate element in array 
A) 
// code to chech duplicete elements

#include <stdio.h>
int main() {
    int n;

    // Input number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements in the array are: ");

    // Check for duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;  // Break inner loop to avoid multiple printing
            }
        }
    }

    return 0;
}

>>Output:
Enter the number of elements in the array: 10
Enter the elements of the array:
10 20 30 40 20 50 60 50 80 90
Duplicate elements in the array are: 20 50

................................................................................

7) bubble sort and selection sort

>>Bubble Sort
Bubble Sort repeatedly compares adjacent elements and swaps them if they are
 in the wrong order.
>>Selection Sort
Selection Sort repeatedly selects the smallest (or largest) element and moves
it to its correct position.

................................................................................

8). Leaner search and Binary search difference write concept 
   (with example elements are your choice)  

//Definition of Searching
Searching is the process of finding the location of a specific element within 
a collection of data (e.g., array, list).
>>Types of Searching Techniques
"1)Linear Search: Sequentially checks each element until the target is found 
"  or the end of the array is reached.
"2)Binary Search: Efficient search for sorted arrays by repeatedly dividing 
"  the search interval in half.

>>Linear Search Program :
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Array of elements
    int key = 30;  // Element to search for

    // Perform linear search
    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            return 0;  // Exit the program after finding the element
        }
    }

    // If element is not found
    printf("Element not found\n");
    return 0;
}

>>Output:
Element found at index 2


>>Binary Search Program :
#include<stdio.h>
int main() {
    // Sorted array
    int x[6] = {10, 20, 30, 40, 50, 60};
    
    int l = 0, h = 5, max, find = 100;  // 'find' is the element to search

    // Binary search loop
    while (l <= h) {
        max = (l + h) / 2;  // Find the middle element

        // Check if the middle element is the one we're looking for
        if (x[max] == find) {
            printf("Element found at index %d\n", max);
            return 0;  // Exit program after finding the element
        }
        // If the element is greater than the middle, search in the right half
        else if (x[max] < find) {
            l = max + 1;
        }
        // If the element is smaller than the middle, search in the left half
        else {
            h = max - 1;
        }
    }

    // If element not found
    printf("Element not found\n");
    return 0;
}

>>Output:
Element not found

______________________________________________________________________________________                           