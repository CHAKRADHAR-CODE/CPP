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
