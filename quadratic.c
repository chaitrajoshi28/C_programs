//Program to calculate roots of the quadratic equation.
#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    
    // Prompt the user for coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    }
    // Condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf\n", root1);
    }
    // If roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0; // Indicate that the program ended successfully
}
