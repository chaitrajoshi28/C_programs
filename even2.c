//Program to check  the number is even or odd.
#include <stdio.h>

int main() {
    int num; // Declare a variable to store the user input

    // Pseudocode:
    // Step 1: Start the program
    // Step 2: Declare an integer variable 'num' to store the user's input
    // Step 3: Prompt the user to enter an integer
    printf("Enter an integer: ");
    
    // Step 4: Read the input and store it in the variable 'num'
    scanf("%d", &num);

    // Step 5: Check if the number is even or odd using the bitwise AND operator
    if ((num & 1) == 0) {
        // Step 5.1: If the least significant bit is 0, the number is even
        printf("%d is even.\n", num);
    } else {
        // Step 5.2: If the least significant bit is 1, the number is odd
        printf("%d is odd.\n", num);
    }

    // Step 6: End the program
    return 0;
}

