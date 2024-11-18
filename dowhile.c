//Program to print numbers from 1 to 10 using a do-while loop.
#include <stdio.h>

int main() {
    int number = 1; // Initialize the starting number

    // Start the do-while loop
    do {
        printf("%d\n", number); // Print the current number
        number++; // Increment the number by 1
    } while (number <= 10); // Continue the loop until number is greater than 10

    return 0; // Indicate that the program ended successfully
}
