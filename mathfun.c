//Programs to solve and display results of given mathematical expressions using the Math module.
#include <stdio.h>
#include <math.h>

int main() {
    double x, result;
    char operation;

    // Prompt the user to enter a value and an operation
    printf("Enter a number: ");
    scanf("%lf", &x);

    printf("Choose an operation (s for square root, e for exponentiation, c for cosine, t for tangent): ");
    scanf(" %c", &operation); // Notice the space before %c to consume any newline

    // Perform the chosen operation
    switch (operation) {
        case 's':
            result = sqrt(x); // Square root
            printf("Square root of %.2lf = %.2lf\n", x, result);
            break;
        case 'e':
            result = exp(x); // Exponential (e^x)
            printf("e raised to the power of %.2lf = %.2lf\n", x, result);
            break;
        case 'c':
            result = cos(x); // Cosine (x in radians)
            printf("Cosine of %.2lf = %.2lf\n", x, result);
            break;
        case 't':
            result = tan(x); // Tangent (x in radians)
            printf("Tangent of %.2lf = %.2lf\n", x, result);
            break;
        default:
            printf("Invalid operation!\n");
            break;
    }

    return 0; // Indicate that the program ended successfully
}
