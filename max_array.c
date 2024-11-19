// program to find maximum element from the array //

#include <stdio.h>

// Function to find the maximum element in an array
int findMaximum(int arr[], int size) {
    int max = arr[0]; // Assume the first element is the maximum

    // Traverse the array to find the maximum value
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger value is found
        }
    }
    
    return max; // Return the maximum value found
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

    // Find and print the maximum element
    int maxElement = findMaximum(arr, size);
    printf("The maximum element in the array is: %d\n", maxElement);

    return 0;
}
