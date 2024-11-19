//Program to check and return missing numbers in between the smallest and the largest elements from the array. (You can assume only one number is missing. If no number is missing then return 0)

#include <stdio.h>

// Function to find the missing number
int findMissingNumber(int arr[], int size) {
    int min = arr[0], max = arr[0];
    
    // Step 1: Find the minimum and maximum elements in the array
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    // Step 2: Calculate the expected sum of numbers from min to max
    int expectedSum = (max * (max + 1)) / 2 - ((min - 1) * min) / 2;
    
    // Step 3: Calculate the actual sum of elements in the array
    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }
    
    // Step 4: Find the missing number as the difference between expected and actual sums
    int missingNumber = expectedSum - actualSum;
    
    // Step 5: Check if a number is missing
    if (missingNumber > 0 && missingNumber >= min && missingNumber <= max) {
        return missingNumber;  // Return the missing number if it's within the range
    } else {
        return 0;  // No missing number
    }
}

int main() {
    int size;

    // Prompt user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    
    // Prompt user to enter the elements of the array
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find and print the missing number
    int missingNumber = findMissingNumber(arr, size);
    
    if (missingNumber == 0) {
        printf("No number is missing.\n");
    } else {
        printf("Missing number is: %d\n", missingNumber);
    }
    
    return 0;
}
