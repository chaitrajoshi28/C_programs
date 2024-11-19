//Program to find and return the sum of the numbers from the user-given1D array.
#include <stdio.h>

int main() {
    int n; // Number of elements in the array
    int sum = 0; // Variable to store the sum

    // Prompt the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array with user-defined size

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the elements
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Add each element to sum
    }

    // Print the sum
    printf("The sum of the elements in the array is: %d\n", sum);

    return 0; // Indicate that the program ended successfully
}
