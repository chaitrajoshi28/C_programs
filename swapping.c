 //Program to swap two numbers without the third variable.
#include <stdio.h> 
int main() {
    int a, b; // Declare two integer variables

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &a); // Read the first number from the user

    printf("Enter the second number : ");
    scanf("%d", &b); // Read the second number from the user

    // Display the original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values without a third variable
    a = a + b; // Step 1: Sum of a and b is stored in a
    b = a - b; // Step 2: Original value of a is now in b
    a = a - b; // Step 3: Original value of b is now in a

    // Display the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0; // Indicate that the program ended successfully
}
