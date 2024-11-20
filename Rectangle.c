//Program to find the area of the rectangle for a given height and breadth.(length × width)//

// Program to find the area of the rectangle for a given length and width

#include <stdio.h> 

int main() {
    /* 
       Pseudocode:
       1. Start the program.
       2. Declare the variables: 
        - To store the length of the rectangle
        - To store the width of the rectangle
        - To store the calculated area of the rectangle
       3. Display a prompt asking the user to input the length of the rectangle.
       4. Get the input value for the length from the user.
       5. Display a prompt asking the user to input the width of the rectangle.
       6. Get the input value for the width from the user.
       7. Calculate the area of the rectangle using the formula: Area = length * width
       8. Display the result showing the length, width, and the calculated area of the rectangle.
       9. End the program.
    */

    // Step 2: Declare variables for length, width, and area
    float length, width, area;

    // Step 3: Prompt the user to enter the length of the rectangle
    printf("Enter the length of the rectangle: ");
    
    // Step 4: Read the length value from the user
    scanf("%f", &length);

    // Step 5: Prompt the user to enter the width of the rectangle
    printf("Enter the width of the rectangle: ");
    
    // Step 6: Read the width value from the user
    scanf("%f", &width);

    // Step 7: Calculate the area of the rectangle using Area = length * width
    area = length * width;

    // Step 8: Display the result with 2 decimal places
    printf("The area of the rectangle with length %.2f and width %.2f is %.2f.\n", length, width, area);

    // Step 9: End the program
    return 0;
}
