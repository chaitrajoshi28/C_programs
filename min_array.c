// program to find minimum element from the array //
#include <stdio.h>

// Function to find the minimum element in an array
int findMinimum(int arr[], int size) {
    int min = arr[0]; // Assume the first element is the minimum

    // Traverse the array to find the minimum value
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if a smaller value is found
        }
    }
    
    return min; // Return the minimum value found
}

int main() {
    int size;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the minimum element
    int minElement = findMinimum(arr, size);
    printf("The minimum element in the array is: %d\n", minElement);

    return 0;
}
