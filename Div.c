
//Program to div two numbers.
#include <stdio.h>

int main() {
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

    return 0; // Return 0 indicates succesful execution
}  

