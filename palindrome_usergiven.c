//Program to print all palindrome numbers from the user-given range.

#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num; // Store the original number
    int reversedNum = 0;   // Variable to store the reversed number

    // Reverse the number
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10; // Get the last digit and add it to reversedNum
        num /= 10; // Remove the last digit
    }

    // Check if the original number and the reversed number are the same
    return originalNum == reversedNum;
}

int main() {
    int start, end;

    // Prompt the user for the range
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("Palindrome numbers between %d and %d are:\n", start, end);

    // Loop through the range and check for palindromes
    for (int num = start; num <= end; num++) {
        if (isPalindrome(num)) {
            printf("%d\n", num); // Print the palindrome number
        }
    }

    return 0; // Indicate that the program ended successfully
}
