// program to find area of the squre for given side area value//
#include <stdio.h>

int main() {

    /* 
       Pseudocode:
       1. Start the program.
       2. Declare the variables: 
        To store the length of the side of the square
        To store the calculated area of the square
       3. Display a prompt asking the user to input the length of the side of the square.
       4. Get the input value for the side from the user.
       5. Calculate the area of the square by multiplying the side length by itself.
       6. Display the result showing the side length and the area of the square.
       7. End the program.
    
    */

    // Declare variables for side length and area
    float side, area;

    // Prompt the user to enter the length of the side of the square
    printf("Enter the length of the side of the square: ");
    
    // Read the side length from the user
    scanf("%f", &side);

    // Calculate the area of the square (side * side)
    area = side * side; // Alternatively, you could use: area = pow(side, 2); with <math.h>

    // Display the result with 2 decimal places
    printf("The area of the square with side length %.2f is %.2f.\n", side, area);

    // Return 0 indicates successful execution of the program
    return 0;
}

