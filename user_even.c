//Program to find the sum of the even numbers in a user-given range.
#include <stdio.h>

int main() {
    int start; // Declare variable for the starting number
    int end = 100; // Define a fixed ending number

    // Prompt the user for the starting number
    printf("Enter the starting number: ");
    scanf("%d", &start);

    // Adjust the starting number if it's odd
    if (start % 2 != 0) {
        start++; // Increment start to the next even number if it's odd
    }

    printf("Even numbers from %d to %d are:\n", start, end);

    // Loop through the range
    for (int i = start; i <= end; i += 2) { // Increment by 2 to get only even numbers
        printf("%d\n", i); // Print the even number
    }

    return 0; // Indicate that the program ended successfully
}
