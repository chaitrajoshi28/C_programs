#include <stdio.h> 

int main() {
    float length, width, area; // Declare variables for length, width, and area

    // Prompt the user to enter the length of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length); // Read the length from the user

    // Prompt the user to enter the width of the rectangle
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width); // Read the width from the user

    // Calculate the area of the rectangle
    area = length * width;

    // Display the result
    printf("The area of the rectangle with length %.2f and width %.2f is %.2f.\n", length, width, area);

    return 0; // Indicate that the program ended successfully
}
