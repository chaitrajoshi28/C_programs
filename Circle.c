//Program to find the area of the circle for a given radius.(πr2)//
#include <stdio.h>   
int main() {
    float radius, area; // Declare variables for radius and area
    const float PI = 3.14159; // Define the constant PI

    // Prompt the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius); // Read the radius value from the user

    // Calculate the area of the circle using Area = π * radius^2
    area = PI * radius * radius;

    // Display the result
    printf("The area of the circle with radius %.2f is %.2f.\n", radius, area);

    return 0; // Indicate that the program ended successfully
}
