//Program to return the number of digits in the user-given number.
#include <stdio.h>

int main() {
    long long number; // To accommodate large numbers
    int sum = 0; // Variable to store the sum of digits

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%lld", &number); // Use %lld for long long integers

    // Calculate the sum of digits
    while (number != 0) {
        sum += number % 10; // Add the last digit to sum
        number /= 10; // Remove the last digit
    }

    // Output the result
    printf("The sum of the digits is: %d\n", sum);

    return 0; // Indicate that the program ended successfully
}
