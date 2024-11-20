 // Program to swap two numbers without the third variable

#include <stdio.h>

int main() {
    // Step 2: Declare two integer variables
    int a, b;

    // Step 3: Input - Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &a); // Read the first number from the user

    // Step 4: Input - Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &b); // Read the second number from the user

    // Step 5: Display the original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Step 6: Swap without a third variable
    a = a + b; // Step 1: Sum of a and b is stored in a
    b = a - b; // Step 2: Original value of a is now in b
    a = a - b; // Step 3: Original value of b is now in a

    // Step 7: Display the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    // Step 8: End the program
    return 0;
}
