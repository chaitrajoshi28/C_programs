//Program to check and return true if the given number is an Armstrong number, else return false.

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num; // Reset original number to the input number

    // Calculate the sum of the digits raised to the power of n
    while (originalNum != 0) {
        remainder = originalNum % 10; // Get the last digit
        result += pow(remainder, n);   // Raise it to the power of n and add to result
        originalNum /= 10;              // Remove the last digit
    }

    // Check if the number is an Armstrong number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0; // Indicate that the program ended successfully
}
