//Program to return the sum of the odd digits of a user-given number.

#include <stdio.h>

int main() {
    long long number; // To accommodate large numbers
    int sum = 0; // Variable to store the sum of odd digits
    int digit; // Variable to store each digit

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%lld", &number); // Use %lld for long long integers

    // Calculate the sum of odd digits
    while (number != 0) {
        digit = number % 10; // Get the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            sum += digit; // Add the odd digit to sum
        }
        number /= 10; // Remove the last digit
    }

    // Output the result
    printf("The sum of the odd digits is: %d\n", sum);

    return 0; // Indicate that the program ended successfully
}
