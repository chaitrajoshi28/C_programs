//Program to find the area of the triangle for the given base and height.

#include <stdio.h> 
int main() {
    float base, height, area; // Declare variables for base, height, and area

    // Prompt the user to enter the base of the triangle
    printf("Enter the base of the triangle: ");
    scanf("%f", &base); // Read the base value from the user

    // Prompt the user to enter the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%f", &height); // Read the height value from the user

    // Calculate the area of the triangle using Area = 1/2 * base * height
    area = 0.5 * base * height;

    // Display the result
    printf("The area of the triangle with base %.2f and height %.2f is %.2f.\n", base, height, area);

    return 0; // Indicate that the program ended successfully
}
