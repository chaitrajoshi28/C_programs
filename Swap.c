//Program to swap two numbers with the help of the third variable.

#include <stdio.h> 
int main() {
    int a, b, temp; // Declare variables for two numbers and a temporary variable

    // Prompt the user to enter the first number
    printf("Enter the first number (a): ");
    scanf("%d", &a); // Read the value of 'a' from the user

    // Prompt the user to enter the second number
    printf("Enter the second number (b): ");
    scanf("%d", &b); // Read the value of 'b' from the user

    // Display values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values using a third variable
    temp = a; // Store the value of 'a' in 'temp'
    a = b;    // Assign the value of 'b' to 'a'
    b = temp; // Assign the value stored in 'temp' to 'b'

    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0; // Indicate that the program ended successfully
}
