//Program to count and return the number of primes up to the user-given range.//

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
    int end; // Variable for the upper limit of the range
    int count = 0; // Variable to hold the count of prime numbers

    // Input the upper limit from the user
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Validate the input
    if (end < 2) {
        printf("There are no prime numbers up to %d.\n", end);
        return 0; // Exit the program if no primes exist
    }

    // Loop through numbers from 2 to the specified range and count primes
    for (int i = 2; i <= end; i++) {
        if (isPrime(i)) {
            count++; // Increment the count for each prime number found
        }
    }

    // Output the result
    printf("The number of prime numbers up to %d is: %d\n", end, count);

    return 0; // Indicate that the program ended successfully
}
