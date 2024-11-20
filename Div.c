
//Program to div two numbers.
#include <stdio.h>

int main() {

    /* 
       Pseudocode:
       1. Start the program.
       2. Declare the variables for the numerator, denominator, and result.
       3. Display a prompt asking the user to enter the numerator.
       4. Read the numerator input from the user and store it in the variable `numerator`.
       5. Display a prompt asking the user to enter the denominator.
       6. Read the denominator input from the user and store it in the variable `denominator`.
       7. Check if the denominator is zero:
           a. If the denominator is zero, display an error message (Division by zero is not allowed).
           b. If the denominator is not zero, perform the division.
       8. Perform the division: Convert the numerator to float and divide it by the denominator, store the result in `result`.
       9. Display the result with two decimal places.
       10. End the program.
    */

    // Declare the variables for the numerator, denominator, and result
    int numerator, denominator;
    float result;

    // Input values from the user
    printf("Enter the numerator: ");
    scanf("%d", &numerator);
    printf("Enter the denominator: ");
    scanf("%d", &denominator);

    // Check for division by zero
    if (denominator == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        // Perform division
        result = (float)numerator / denominator;
        printf("Result: %.2f\n", result);
    }

    // Return 0 indicates successful execution
    return 0;
}

