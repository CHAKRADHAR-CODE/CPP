#include <stdio.h>

int main() {
    int n, i, arr[10], pos, elem;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position and the element to insert
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &elem);

    // Display the array before insertion
    printf("Before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Check if the position is valid
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to make space for the new element
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos - 1] = elem;
    n++; // Increment the size of the array

    // Display the array after insertion
    printf("After insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
