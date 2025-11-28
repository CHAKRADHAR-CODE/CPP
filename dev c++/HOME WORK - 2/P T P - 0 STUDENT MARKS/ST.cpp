#include <stdio.h>

int main() {
    
    int english, hindi, maths, physics, chemistry;
    int totalMarks;
    float averageMarks;
    char grade;

    
    printf("Enter the marks for English: ");
    scanf("%d", &english);

    printf("Enter the marks for Hindi: ");
    scanf("%d", &hindi);

    printf("Enter the marks for Maths: ");
    scanf("%d", &maths);

    printf("Enter the marks for Physics: ");
    scanf("%d", &physics);

    printf("Enter the marks for Chemistry: ");
    scanf("%d", &chemistry);

    
    totalMarks = english + hindi + maths + physics + chemistry;

    
    if (english >= 40 && hindi >= 40 && maths >= 40 && physics >= 40 && chemistry >= 40) {
        printf("Result: PASS\n");
        printf("Total Marks: %d\n", totalMarks);

        
        averageMarks = totalMarks / 5.0;
        printf("Average Marks: %.2f\n", averageMarks);
	
        
        if (averageMarks >= 60) {
            grade = 'A';
        } 
		else if (averageMarks >= 50 && averageMarks < 60) {
            grade = 'B';
        } 
		else if (averageMarks >= 40 && averageMarks < 50) {
            grade = 'C';
        }

        printf("Grade: %c\n", grade);
    } else {
        printf("Result: FAIL\n");
        printf("Total Marks: %d\n", totalMarks);
    }

    return 0;
}

