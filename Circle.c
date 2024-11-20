//Program to find the area of the circle for a given radius.(πr2)//
// Program to find the area of the circle for a given radius (π * radius^2)

#include <stdio.h>   

int main() {
    /* 
       Pseudocode:
       1. Start the program.
       2. Declare the variables: 
        - To store the radius of the circle
        - To store the calculated area of the circle
        - To store the constant value of PI (3.14159)
       3. Display a prompt asking the user to input the radius of the circle.
       4. Get the input value for the radius from the user.
       5. Calculate the area of the circle using the formula: Area = π * radius^2
       6. Display the result showing the radius and the calculated area of the circle.
       7. End the program.
    */

    // Step 2: Declare variables for radius, area, and PI
    float radius, area;
    const float PI = 3.14159; // Step 2: Define the constant PI

    // Step 3: Prompt the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");
    
    // Step 4: Read the radius value from the user
    scanf("%f", &radius);

    // Step 5: Calculate the area of the circle using Area = π * radius^2
    area = PI * radius * radius;

    // Step 6: Display the result with 2 decimal places
    printf("The area of the circle with radius %.2f is %.2f.\n", radius, area);

    // Step 7: End the program
    return 0;
}
