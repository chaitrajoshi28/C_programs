//Program to print prime numbers
#include <stdio.h>
#include <stdbool.h> // Include stdbool for true/false return values

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers <= 1 are not prime
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If divisible by any number, it is not prime
        }
    }
    
    return true; // If not divisible by any number, it is prime
}

int main() {
    int number; // Declare variable for user input
    
    // Prompt the user for input
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &number);
    
    // Call the function and display result
    if (isPrime(number)) {
        printf("true\n"); // True if number is prime
    } else {
        printf("false\n"); // False if number is not prime
    }
    
    return 0; // Indicate that the program ended successfully
}
