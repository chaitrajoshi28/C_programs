//Program to print even numbers from the user-given1D array.

#include <stdio.h>

int main() {
    int n; // Variable to store the number of elements
    // Prompt the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array of size n

    // Prompt the user to enter the elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Print even numbers from the array
    printf("Even numbers in the array are:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Check if the number is even
            printf("%d ", arr[i]); // Print the even number
        }
    }
    
    printf("\n"); // New line for better output formatting
    return 0; // Indicate that the program ended successfully
}
