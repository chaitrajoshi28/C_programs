//Program to print Armstrong numbers in the user-given range.//
#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, originalNum, remainder, result, n;

    // Prompt the user for the range
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    // Loop through the range
    for (num = start; num <= end; num++) {
        originalNum = num; // Store the original number
        result = 0; // Reset result for each number
        n = 0; // Reset digit count

        // Calculate the number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            n++;
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
            printf("%d\n", num); // Print the Armstrong number
        }
    }

    return 0; // Indicate that the program ended successfully
}
