#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;  // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime number
}

// Function to extract and check prime numbers from the string
void printPrimeNumbers(char str[]) {
    int num = 0;
    int found = 0;  // Flag to check if a number is found

    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {  // If the character is a digit
            num = num * 10 + (str[i] - '0');  // Build the number by concatenating digits
            found = 1;  // A number is being formed
        } else {
            // If a non-digit character is found and a number has been formed
            if (found) {
                // Check if the formed number is prime
                if (isPrime(num)) {
                    printf("%d ", num);  // Print the prime number
                }
                num = 0;  // Reset number for the next one
                found = 0;  // Reset the flag
            }
        }
    }

    // Check the last number in case the string ends with a number
    if (found && isPrime(num)) {
        printf("%d", num);  // Print the prime number
    }

    printf("\n");
}

int main() {
    char str[100];  // Array to hold the user input string

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string

    // Call the printPrimeNumbers function to print the prime numbers
    printf("Prime numbers in the string: ");
    printPrimeNumbers(str);

    return 0;
}
