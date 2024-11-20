
//Program to sub two numbers.
#include<stdio.h>

int main() {

    /* 
       Pseudocode:
       1. Start the program.
       2. Declare variables to store two numbers and their difference.
       3. Display a prompt message asking the user for the first number.
       4. Read the first number from the user input and store it in `num1`.
       5. Display a prompt message asking the user for the second number.
       6. Read the second number from the user input and store it in `num2`.
       7. Calculate the difference between the two numbers (num1 - num2).
       8. Display the result (the difference between num1 and num2).
       9. End the program.
    */

    // Declare the variables to store the two numbers and the difference
    int num1, num2, difference;

    // Prompt the user for the first number
    printf("Enter the first number:");
    // Read the first number from user input
    scanf("%d", &num1); 

    // Prompt the user for the second number
    printf("Enter the second number:");
    // Read the second number from user input
    scanf("%d", &num2);

    // Calculate the difference between the two numbers
    difference = num1 - num2;

    // Display the result
    printf("The difference of %d and %d is: %d\n", num1, num2, difference);

    // Return 0 indicates successful execution
    return 0;
}

 
