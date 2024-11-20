//Programs to solve and display results of given mathematical expressions using the Math module.
#include <stdio.h>
#include <math.h>

int main() {
    // Step 1: Declare variables to store the number, the result, and the operation chosen by the user.
    double x, result;
    char operation;

    // Step 2: Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%lf", &x);  // Read the number from the user

    // Step 3: Prompt the user to choose an operation
    printf("Choose an operation (s for square root, e for exponentiation, c for cosine, t for tangent): ");
    scanf(" %c", &operation); // Read the operation (use space before %c to handle newline characters)

    // Step 4: Use a switch statement to perform the chosen operation
    switch (operation) {
        case 's':
            // Step 5: If the user chose 's' for square root
            result = sqrt(x); // Calculate the square root
            printf("Square root of %.2lf = %.2lf\n", x, result); // Display the result
            break;
        case 'e':
            // Step 6: If the user chose 'e' for exponentiation
            result = exp(x); // Calculate e^x (exponentiation)
            printf("e raised to the power of %.2lf = %.2lf\n", x, result); // Display the result
            break;
        case 'c':
            // Step 7: If the user chose 'c' for cosine
            result = cos(x); // Calculate cosine of x (in radians)
            printf("Cosine of %.2lf = %.2lf\n", x, result); // Display the result
            break;
        case 't':
            // Step 8: If the user chose 't' for tangent
            result = tan(x); // Calculate tangent of x (in radians)
            printf("Tangent of %.2lf = %.2lf\n", x, result); // Display the result
            break;
        default:
            // Step 9: If the user entered an invalid operation
            printf("Invalid operation!\n");
            break;
    }

    // Step 10: End the program
    return 0; // Indicate that the program ended successfully
}
