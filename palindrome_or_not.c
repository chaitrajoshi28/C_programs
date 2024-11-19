//Program to check and return true if the number is a palindrome, else return false.

#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for comparison

    // Reverse the number
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0; // Indicate that the program ended successfully
}
