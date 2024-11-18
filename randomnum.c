//Program to print a random number from a specific user-given range.

#include <stdio.h>
#include <stdlib.h>  // Required for rand() and srand()
#include <time.h>    // Required for time()

int main() {
    int lower, upper, randomNumber;

    // Prompt the user for the range
    printf("Enter the lower limit of the range: ");
    scanf("%d", &lower);

    printf("Enter the upper limit of the range: ");
    scanf("%d", &upper);

    // Seed the random number generator
    srand(time(0));

    // Generate a random number within the specified range
    randomNumber = (rand() % (upper - lower + 1)) + lower;

    // Display the random number
    printf("Random number between %d and %d: %d\n", lower, upper, randomNumber);

    return 0;
}
