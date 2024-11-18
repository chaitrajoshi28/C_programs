//Program to return the sum of the even digits of a user-given number.

#include <stdio.h>

int main() {
    long long number; // To accommodate large numbers
    int sum = 0; // Variable to store the sum of even digits

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%lld", &number); // Use %lld for long long integers

    // Calculate the sum of even digits
    while (number != 0) {
        int digit = number % 10; // Get the last digit

        // Check if the digit is even
        if (digit % 2 == 0) {
            sum += digit; // Add the even digit to the sum
        }

        number /= 10; // Remove the last digit
    }

    // Output the result
    printf("The sum of the even digits is: %d\n", sum);

    return 0; // Indicate that the program ended successfully
}
