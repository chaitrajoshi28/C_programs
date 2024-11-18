//Program to find the sum of the numbers in a user-given range.
#include <stdio.h>

int main() {
    int start, end, sum = 0; // Declare variables for start, end, and sum

    // Prompt the user for the starting and ending numbers
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Calculate the sum of numbers in the range
    for (int i = start; i <= end; i++) {
        sum += i; // Add each number to the sum
    }

    // Display the result
    printf("The sum of numbers from %d to %d is: %d\n", start, end, sum);

    return 0; // Indicate that the program ended successfully
}
