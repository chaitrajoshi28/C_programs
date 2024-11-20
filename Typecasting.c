// Program to implement typecasting

#include <stdio.h>

int main() {
    /* 
       Pseudocode:
       1. Start the program.
       2. Declare variables:
           a initialized with 25.
           b initialized with 3.
           c  to store the result of typecasting.
       3. Typecast a to float before performing the division to ensure floating-point result.
          Perform the division a / b and store the result in c.
       4. Print the result of the division in the format "500/3 = <result>" with 4 decimal places.
       5. End the program.
    */

    // Step 2: Declare and initialize variables
    int a = 25, b = 3; // Declare and initialize two integer variables
    float c; // Declare a float variable

    // Step 3: Perform typecasting and division
    c = (float)a / b; // Typecasting 'a' to float before division

    // Step 4: Display the result with 4 decimal places
    printf("(typecasting the expression) 500/3 = %.4f\n", c);

    // Step 5: End the program
    return 0;
}

