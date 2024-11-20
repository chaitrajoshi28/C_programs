//Program to mul two numbers.
#include<stdio.h>

int main() {

    /* 
       Pseudocode:
       1. Start the program.
       2. Declare variables to store two numbers and the result of their multiplication.
       3. Display a prompt message asking the user for the first number.
       4. Read the first number from the user input and store it in `num1`.
       5. Display a prompt message asking the user for the second number.
       6. Read the second number from the user input and store it in `num2`.
       7. Multiply `num1` and `num2`, and store the result in `mul`.
       8. Display the result of the multiplication.
       9. End the program.
    */

    // Declare the variables to store the two numbers and the multiplication result
    int num1, num2, mul;

    // Prompt the user for the first number
    printf("Enter the first number:");
    // Read the first number from user input
    scanf("%d", &num1); 

    // Prompt the user for the second number
    printf("Enter the second number:");
    // Read the second number from user input
    scanf("%d", &num2);

    // Multiply the two numbers and store the result in mul
    mul = num1 * num2;

    // Display the result of the multiplication
    printf("Multiplication of %d and %d is: %d\n", num1, num2, mul);

    // Return 0 indicates successful execution
    return 0;
}
