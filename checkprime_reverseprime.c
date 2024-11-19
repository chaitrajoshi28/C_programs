//Program to check and return true if the given number is prime and the reverse of the given number is also a prime
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++) { // Check up to the square root of n
        if (n % i == 0) return false; // If divisible, not prime
    }
    return true; // If no divisors found, it is prime
}

// Function to reverse a number
int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10; // Append last digit
        n /= 10; // Remove last digit
    }
    return reversed; // Return the reversed number
}

int main() {
    int num;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (isPrime(num)) {
        // Reverse the number
        int reversedNum = reverseNumber(num);
        
        // Check if the reversed number is also prime
        if (isPrime(reversedNum)) {
            printf("%d is a prime number and its reverse %d is also prime.\n", num, reversedNum);
        } else {
            printf("%d is a prime number but its reverse %d is not prime.\n", num, reversedNum);
        }
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0; // Indicate that the program ended successfully
}
