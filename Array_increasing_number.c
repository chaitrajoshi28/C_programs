//Program to return true if the array contains, somewhere, three increasing adjacent numbers like .... 4, 5, 6, ... or 23, 24, 25.

#include <stdio.h>

// Function to check for three consecutive increasing numbers in an array
int hasThreeConsecutive(int arr[], int size) {
    for (int i = 0; i < size - 2; i++) { 
        // Check if the current element, next element, and the element after that are consecutive
        if (arr[i] + 1 == arr[i + 1] && arr[i + 1] + 1 == arr[i + 2]) {
            return 1; // Return true if found
        }
    }
    return 0; // Return false if no such sequence found
}

int main() {
    int arr[] = {10, 22, 23, 24, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Check if array has three consecutive increasing numbers
    if (hasThreeConsecutive(arr, size)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
