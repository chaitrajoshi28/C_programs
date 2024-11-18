//Program to return a 4 digit random number.
#include <stdio.h>
#include <stdlib.h>  // Include for rand() and srand()
#include <time.h>    // Include for time()

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a 4-digit random number (from 1000 to 9999)
    int randomNumber = rand() % 9000 + 1000;

    // Print the generated random number
    printf("Generated 4-digit random number: %d\n", randomNumber);

    return 0; // Indicate that the program ended successfully
}
