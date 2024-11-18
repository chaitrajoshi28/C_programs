// program to find area of the squre for given side area value//
#include <stdio.h> 
int main() {
    float side, area; // Declare variables for side length and area

    // Prompt the user to enter the length of the side of the square
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side); // Read the side length from the user

    // Calculate the area of the square
    area = side * side; // Alternatively, you could use: area = pow(side, 2); with <math.h>

    // Display the result
    printf("The area of the square with side length %.2f is %.2f.\n", side, area);

    return 0; // Indicate that the program ended successfully
}
