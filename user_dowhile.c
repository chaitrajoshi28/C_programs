//Program to print numbers in a user-given range using a do-while loop.
#include <stdio.h>

int main() {
    int start, end; // Declare variables for the starting and ending values

    // Prompt the user for the starting and ending numbers
    printf("Enter the starting number: ");
    scanf("%d", &start);
    
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Numbers in the range from %d to %d are:\n", start, end);

    // Loop to print each number in the range
    do {
        printf("%d\n", start); // Print the current number
        start++; // Increment the number
    } while (start <= end); // Continue while start is less than or equal to end

    return 0; // Indicate that the program ended successfully
}
