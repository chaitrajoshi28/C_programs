//Program to find and return the sum of the even numbers from the user-given1D array.
#include <stdio.h>

int sum_of_even(int arr[], int n) {
    int sum = 0;

    // Loop through each element of the array
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Check if the element is even
            sum += arr[i]; // Add even element to sum
        }
    }

    return sum; // Return the sum of even numbers
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

    // Calculate and print the sum of even numbers
    int sum = sum_of_even(arr, n);
    printf("The sum of even numbers in the array is: %d\n", sum);

    return 0;
}
