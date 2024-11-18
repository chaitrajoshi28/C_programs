#include <stdio.h>

// Function to check if a number is even
int isEven(int number) {
    // Returns 1 if even, 0 if odd
    return (number % 2 == 0) ? 1 : 0;
}

int main() {
    int number;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function and check the result
    if (isEven(number)) {
        printf("True - %d is an even number.\n", number);
    } else {
        printf("False - %d is not an even number.\n", number);
    }

    return 0; // Indicate that the program ended successfully
}
