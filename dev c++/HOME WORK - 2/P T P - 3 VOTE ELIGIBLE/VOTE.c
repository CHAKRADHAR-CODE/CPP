#include <stdio.h>

int main() {
    int age;

    
    printf("Enter your age: ");
    scanf("%d", &age);

    
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    }
	else {
        printf("You are not eligible to vote.\n");
        printf("you need to wait %d year.\n",18-age);
    }

    return 0;
}

