//Program to check and return true if the user-given number is a sequential digit number, else return false.
#include <stdio.h>
#include <stdbool.h>

// Function to check if the given number has sequential digits
bool isSequential(int num) {
    int lastDigit = num % 10;  // Get the last digit
    num /= 10;  // Remove the last digit from the number

    // Check each remaining digit
    while (num > 0) {
        int currentDigit = num % 10;  // Get the next digit
        if (currentDigit + 1 != lastDigit) {
            return false;  // If not sequential, return false
        }
        lastDigit = currentDigit;  // Update lastDigit to the current one
        num /= 10;  // Remove the current digit
    }
    return true;  // All digits are sequential
}

int main() {
    int num;

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is sequential
    if (isSequential(num)) {
        printf("True - The number %d is a sequential digit number.\n", num);
    } else {
        printf("False - The number %d is not a sequential digit number.\n", num);
    }

    return 0;
}
