//Program to check and return true if a user-given number is a perfect square root, else return false.

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is a perfect square
bool isPerfectSquare(int num) {
    if (num < 0) return false;

    int sqrtValue = (int)sqrt(num); // Calculate the square root and cast to an integer
    return (sqrtValue * sqrtValue == num); // Check if squaring it returns the original number
}

int main() {
    int number;

    // Prompt user for input
    printf("Enter a number to check if it is a perfect square: ");
    scanf("%d", &number);

    // Check and output result
    if (isPerfectSquare(number)) {
        printf("True - %d is a perfect square.\n", number);
    } else {
        printf("False - %d is not a perfect square.\n", number);
    }

    return 0;
}
