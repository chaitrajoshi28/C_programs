//Program to calculate roots of the quadratic equation.
#include <math.h>
#include <stdio.h>
//step1: start with program
//step2: Declare variables a,b,c

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    // Step 3: Prompt the user for coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Step 4: Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Step 5: Check if roots are real and different
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a); // First root
        root2 = (-b - sqrt(discriminant)) / (2 * a); // Second root
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2); // Display the roots
    }
    // Step 6: Check if roots are real and equal
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a); // Equal roots
        printf("root1 = root2 = %.2lf\n", root1); // Display equal roots
    }
    // Step 7: If roots are complex
    else {
        realPart = -b / (2 * a); // Real part of the complex roots
        imagPart = sqrt(-discriminant) / (2 * a); // Imaginary part of the complex roots
        printf("root1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart); // Display complex roots
    }

    // Step 8: End the program
    return 0;
}
