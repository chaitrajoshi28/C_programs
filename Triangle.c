//Program to find the area of the triangle for the given base and height.

#include <stdio.h> 

int main() {
    /* 
       Pseudocode:
       1. Start the program.
       2. Declare the variables: 
        - To store the base of the triangle
        - To store the height of the triangle
        - To store the calculated area of the triangle
       3. Display a prompt asking the user to input the base of the triangle.
       4. Get the input value for the base from the user.
       5. Display a prompt asking the user to input the height of the triangle.
       6. Get the input value for the height from the user.
       7. Calculate the area of the triangle using the formula: Area = 0.5 * base * height
       8. Display the result showing the base, height, and the calculated area of the triangle.
       9. End the program.
    */

    // Step 2: Declare variables for base, height, and area
    float base, height, area;

    // Step 3: Prompt the user to enter the base of the triangle
    printf("Enter the base of the triangle: ");
    
    // Step 4: Read the base value from the user
    scanf("%f", &base);

    // Step 5: Prompt the user to enter the height of the triangle
    printf("Enter the height of the triangle: ");
    
    // Step 6: Read the height value from the user
    scanf("%f", &height);

    // Step 7: Calculate the area of the triangle using Area = 0.5 * base * height
    area = 0.5 * base * height;

    // Step 8: Display the result with 2 decimal places
    printf("The area of the triangle with base %.2f and height %.2f is %.2f.\n", base, height, area);

    // Step 9: End the program
    return 0;
}
