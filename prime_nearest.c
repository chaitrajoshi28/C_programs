//Program to return the nearest prime number of the user-given number.

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // If divisible by any number other than 1 and itself
    }
    return true; // The number is prime
}

// Function to find the nearest prime number
int nearestPrime(int num) {
    int lower = num, upper = num;

    // Check for lower prime
    while (lower > 1) {
        if (isPrime(lower)) {
            break; // Found the nearest lower prime
        }
        lower--;
    }

    // Check for upper prime
    while (true) {
        if (isPrime(upper)) {
            break; // Found the nearest upper prime
        }
        upper++;
    }

    // Return the nearest prime based on proximity
    if ((num - lower) <= (upper - num)) {
        return lower; // Return the lower prime if it's closer
    } else {
        return upper; // Return the upper prime otherwise
    }
}

int main() {
    int number;

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Find and display the nearest prime number
    int nearest = nearestPrime(number);
    printf("The nearest prime number to %d is: %d\n", number, nearest);

    return 0; // Indicate that the program ended successfully
}
