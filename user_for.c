//Program to print numbers in a user-given range using a for loop
#include <stdio.h>

int main() {
    int start, end; // Declare variables for the starting and ending values

    // Prompt the user for the starting and ending numbers
    printf("Enter the starting number: ");
    scanf("%d", &start);
    
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Numbers in the range from %d to %d are:\n", start, end);

    // Using a for loop to print each number in the range
    for (int i = start; i <= end; i++) {
        printf("%d\n", i); // Print the current number
    }

    return 0; // Indicate that the program ended successfully
}
