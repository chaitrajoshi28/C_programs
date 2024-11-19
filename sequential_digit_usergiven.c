//Program to check and print all sequential digit numbers in a user-given range.

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a sequential digit number
bool isSequential(int num) {
    int lastDigit = num % 10; // Get the last digit
    num /= 10;

    // Check each digit from end to start
    while (num > 0) {
        int currentDigit = num % 10;
        if (currentDigit + 1 != lastDigit) {
            return false; // If digits are not sequential, return false
        }
        lastDigit = currentDigit; // Update last digit to current
        num /= 10; // Remove the last digit
    }
    return true;
}

int main() {
    int start, end;

    // Input the range from the user
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("Sequential digit numbers between %d and %d are:\n", start, end);

    // Loop through the range to find sequential digit numbers
    for (int num = start; num <= end; num++) {
        if (isSequential(num)) {
            printf("%d\n", num); // Print if the number is sequential
        }
    }

    return 0; // Indicate that the program ended successfully
}
