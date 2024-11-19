//Program to check and return true if a user-given number is the power of 2, else return false.
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a power of 2
bool isPowerOfTwo(int num) {
    // A number is a power of 2 if it is greater than 0 
    // and its binary form has only one bit set to 1
    return (num > 0) && ((num & (num - 1)) == 0);
}

int main() {
    int number;

    // Prompt the user for input
    printf("Enter a number to check if it is a power of 2: ");
    scanf("%d", &number);

    // Check and output result
    if (isPowerOfTwo(number)) {
        printf("True - %d is a power of 2.\n", number);
    } else {
        printf("False - %d is not a power of 2.\n", number);
    }

    return 0;
}
