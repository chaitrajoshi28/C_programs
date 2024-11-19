//Program to print elements from the user-given 1D array.
#include <stdio.h>
int main() {
    int n; // Variable to store the number of elements in the array

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input array elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the element directly
    }

    // Print the elements of the array
    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each element
    }
    printf("\n"); // New line after printing all elements

    return 0; // Indicate that the program ended successfully
}
