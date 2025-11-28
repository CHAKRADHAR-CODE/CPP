#include<stdio.h>

int main() {
    
    float marks1, marks2, marks3, marks4, marks5;
    float total, average, percentage;

    
    printf("Enter Maths Marks : ");
    scanf("%f", &marks1);
    printf("Enter English Marks : ");
    scanf("%f", &marks2);
    printf("Enter physics Marks : ");
    scanf("%f", &marks3);
    printf("Enter chemistry Marks : ");
    scanf("%f", &marks4);
    printf("Enter information practice Marks : ");
    scanf("%f", &marks5);

    
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    average = total / 5;
    percentage = (total / 500) * 100;

    
    printf("\nTotal marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

