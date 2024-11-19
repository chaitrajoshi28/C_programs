//Program to print palindrome numbers from the array.

#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int original = num; // Store the original number
    int reversed = 0;
    
    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    // Check if the reversed number is the same as the original
    return original == reversed;
}

// Function to print palindrome numbers from the array
void printPalindromes(int arr[], int size) {
    printf("Palindrome numbers in the array are: ");
    int found = 0; // Flag to track if a palindrome is found

    for (int i = 0; i < size; i++) {
        if (isPalindrome(arr[i])) {
            printf("%d ", arr[i]); // Print the palindrome number
            found = 1;
        }
    }

    // If no palindrome numbers were found
    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    int arr[] = {121, 234, 545, 789, 232, 456, 12321}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    // Call the function to print palindrome numbers from the array
    printPalindromes(arr, size);

    return 0;
}
