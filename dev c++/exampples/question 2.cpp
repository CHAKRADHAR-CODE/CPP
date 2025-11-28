#include <stdio.h>
int main() {
    int x, result = 0, remainder=0, org;

    printf("Enter a number :");
    scanf("%d", &x);

    org = x;

    while (x != 0) {
        remainder = x % 10;
        result = result * 10 + remainder;
        x /= 10;
    }

    if (org == result) {
        printf("it is a palindrome number.\n");
    } else {
        printf("it is not a palindrome number\n");
    }

    return 0;
}
