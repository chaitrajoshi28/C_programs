//Program to print numbers from 1 to 10 using a while loop.
#include <stdio.h>

int main() {
    int i = 1; // Initialize the variable to start from 1

    // Use a while loop to print numbers from 1 to 10
    while (i <= 10) { // Condition to check if i is less than or equal to 10
        printf("%d\n", i); // Print the current value of i
        i++; // Increment i by 1 after each iteration
    }

    return 0; // Indicate that the program ended successfully
}
