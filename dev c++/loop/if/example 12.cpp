#include <stdio.h>

int main() {
    int D, years, weeks, remainingDays;

    // Input the number of days
    printf("Enter the number of days: ");
    scanf("%d", &D);

    // Convert days into years
    years = D / 365;

    // Find remaining days after converting to years
    remainingDays = D % 365;

    // Convert remaining days into weeks
    weeks = remainingDays / 7;

    // Display the result (ignoring odd days)
    printf("%d years, %d weeks\n", years, weeks);

    return 0;
}

