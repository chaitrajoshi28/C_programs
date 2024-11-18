//Program to print Fibonacci series terms in the user-given range. 

#include <stdio.h>
int main() {
    int start, end, first = 0, second = 1, next;

    // Prompt the user for the start and end of the range
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("Fibonacci series terms between %d and %d:\n", start, end);

    // Print Fibonacci numbers until the next number exceeds the end of the range
    while (first <= end) {
        if (first >= start) { // Check if the Fibonacci number is within the range
            printf("%d ", first);
        }

        // Calculate the next Fibonacci number
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n"); // Print a newline for better output formatting
    return 0; // Indicate that the program ended successfully
}
