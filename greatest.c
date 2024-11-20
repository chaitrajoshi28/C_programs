//Write a program to find the greatest among 2 numbers.
#include <stdio.h>

int main() {
    // Step 1: Declare two integer variables to store the numbers
    int num1, num2;

    // Step 2: Prompt the user to enter two integers
    printf("Enter two integers:\n");

    // Step 3: Read the values of the integers
    scanf("%d %d", &num1, &num2);

    // Step 4: Compare the two numbers and print the greatest
    if (num1 > num2) {
        // If num1 is greater, print num1
        printf("%d is the greatest number.\n", num1);
    } else {
        // Otherwise, print num2
        printf("%d is the greatest number.\n", num2);
    }

    // Step 5: End the program
    return 0;
}
