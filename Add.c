//Program to add two numbers.

#include<stdio.h>

int main() {

    /* 
       Pseudocode:
       1. Start the program.
       2. Declare variables to store two numbers and the sum.
       3. Display a prompt message asking the user for the first number.
       4. Read the first number input by the user.
       5. Display a prompt message asking the user for the second number.
       6. Read the second number input by the user.
       7. Calculate the sum of the two numbers.
       8. Display the sum to the user.
       9. End the program.
    */

    // Declare the variables to store the two numbers and the sum
    int num1, num2, sum;

    // Prompt the user for input
    printf("Enter the first number:");
    // Read the first number from user input
    scanf("%d", &num1); 

    // Prompt the user for the second number
    printf("Enter the second number:");
    // Read the second number from user input
    scanf("%d", &num2);

    // Calculate sum of 2 numbers
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    // Return 0 indicates successful execution
    return 0;
}
