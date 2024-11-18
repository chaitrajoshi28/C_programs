//Program to implement typecasting.
#include <stdio.h>
int main() {
    int a = 25, b = 3; // Declare and initialize two integer variables
    float c; // Declare a float variable

    c = (float)a / b; // Typecasting 'a' to float before division
    printf("(typecasting the expression) 500/3= %.4f\n", c); // Print the result with 4 decimal places

    return 0; // Indicate that the program ended successfully
}
