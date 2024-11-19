//Program to print sorted array in descending order.
#include <stdio.h>

// Function to sort the array in ascending order using Bubble Sort
void sortArrayAscending(int arr[], int size) {
    int temp; // Temporary variable for swapping

    // Bubble Sort: Repeatedly step through the array and swap adjacent elements if they are in the wrong order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  // If the current element is greater than the next
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Print each element followed by a space
    }
    printf("\n");  // Newline after the array
}

int main() {
    int arr[] = {64, 25, 12, 22, 11,14};  // Array to be sorted
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    printf("Original array: ");
    printArray(arr, size);  // Print the original array

    // Sort the array in ascending order
    sortArrayAscending(arr, size);

    printf("Sorted array in ascending order: ");
    printArray(arr, size);  // Print the sorted array

    return 0;  // End of program
}
