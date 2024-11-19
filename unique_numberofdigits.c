// Program to check and return true if all the elements contain the unique number of digits, 
#include <stdio.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    // Handle negative numbers by taking their absolute value
    if (num < 0) {
        num = -num;
    }

    // If the number is 0, it has 1 digit
    if (num == 0) {
        return 1;
    }

    int count = 0;
    while (num != 0) {
        num /= 10; // Remove the last digit
        count++;   // Increment the digit count
    }
    return count;
}

// Function to check if all elements have unique digit counts
int hasUniqueDigitCounts(int arr[], int size) {
    int digitCounts[10] = {0}; // Array to store digit counts (assuming no number has more than 10 digits)

    // Iterate through each number in the array
    for (int i = 0; i < size; i++) {
        int digits = countDigits(arr[i]);

        // If this digit count has been seen before, return false
        if (digitCounts[digits] > 0) {
            return 0; // Not unique
        }

        // Mark this digit count as seen
        digitCounts[digits]++;
    }
    return 1; // All digit counts are unique
}

// Main function
int main() {
    int arr1[] = {6, 97, 1543, 734}; // Example array 1
    int arr2[] = {36, 28, 124};      // Example array 2

    // Check for array 1
    if (hasUniqueDigitCounts(arr1, sizeof(arr1) / sizeof(arr1[0]))) {
        printf("Input 1: [6, 97, 1543, 734] -> Output: true\n");
    } else {
        printf("Input 1: [6, 97, 1543, 734] -> Output: false\n");
    }

    // Check for array 2
    if (hasUniqueDigitCounts(arr2, sizeof(arr2) / sizeof(arr2[0]))) {
        printf("Input 2: [36, 28, 124] -> Output: true\n");
    } else {
        printf("Input 2: [36, 28, 124] -> Output: false\n");
    }

    return 0;
}
