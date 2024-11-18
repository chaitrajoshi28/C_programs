//Program to print numbers in a user-given range using a while loop.
#include <stdio.h>

int main() {
    int start, end; // Declare variables for start and end of range

    // Get user input for the start and end values
    printf("Enter the starting number: ");
    scanf("%d", &start);
    
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Numbers in the range from %d to %d:\n", start, end);

    // Loop to print each number in the range
    while (start <= end) {
        printf("%d\n", start); // Print the current number
        start++; // Increment start to move to the next number
    }

    return 0; // Indicate successful program termination
}
