//Program to find the sum of the primes in the user-given range.

#include <stdio.h>
#include <stdlib.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Number is prime
}

int main() {
    int start, end; // Variables for the range
    int sum = 0;    // Variable to hold the sum of primes

    // Input the range from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Validate the input range
    if (start > end) {
        printf("Invalid range. Starting number should be less than or equal to the ending number.\n");
        exit(0);
    }

    // Loop through the range and calculate the sum of primes
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            sum += i; // Add prime number to sum
        }
    }

    // print sum of prime numbers
    printf("The sum of prime numbers between %d and %d is: %d\n", start, end, sum);

    return 0; // Indicate that the program ended successfully
}
