//Program to print odd numbers from the user-given1D array.
#include <stdio.h>

int main() {
    int n; // Number of elements in the array

    // Prompt the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array with user-defined size

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print odd numbers from the array
    printf("Odd numbers in the array are:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) { // Check if the number is odd
            printf("%d ", arr[i]); // Print the odd number
        }
    }
    printf("\n"); // New line for better output formatting

    return 0; // Indicate that the program ended successfully
}
