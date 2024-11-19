//Program to find and return the sum of the positive numbers from the user-given1D array.

#include <stdio.h>

int sum_of_positive(int arr[], int n) {
    int sum = 0;

    // Loop through each element of the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) { // Check if the element is positive
            sum += arr[i]; // Add positive element to sum
        }
    }

    return sum; // Return the sum of positive numbers
}

int main() {
    int n;

    // Prompt the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate and print the sum of positive numbers
    int sum = sum_of_positive(arr, n);
    printf("The sum of positive numbers in the array is: %d\n", sum);

    return 0;
}
