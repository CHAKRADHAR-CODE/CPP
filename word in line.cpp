#include <stdio.h>

int main() {
    char str[100];
    int count = 0,i;

    printf("Enter a string: ");
    gets(str);

    printf("Number of characters in each word:\n");

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            count++;
        } else if (count > 0) {
            printf("%d\n", count);
            count = 0;
        }
    }

    if (count > 0) {
        printf("%d\n", count);
    }

}