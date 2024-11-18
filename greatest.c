//Write a program to find the greatest among 2 numbers.
#include <stdio.h>

int main() {
    int num1, num2; // Declare variables to store the numbers

    // Prompt the user for input
    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);

    // Determine and print the greatest number
    if (num1 > num2) {
        printf("%d is the greatest number.\n", num1);
    } else {
        printf("%d is the greatest number.\n", num2);
    }

    return 0; // Indicate that the program ended successfully
}
