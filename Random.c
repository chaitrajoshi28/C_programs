//Program to return a 4 digit random number.
#include <stdio.h>
#include <stdlib.h>  // Include for rand() and srand()
#include <time.h>    // Include for time()

int main() {
    // Step 3: Seed the random number generator
    srand(time(NULL));

    // Step 4: Generate a 4-digit random number (from 1000 to 9999)
    int randomNumber = rand() % 9000 + 1000;

    // Step 5: Display the generated 4-digit random number
    printf("Generated 4-digit random number: %d\n", randomNumber);

    // Step 6: End the program
    return 0;
}
