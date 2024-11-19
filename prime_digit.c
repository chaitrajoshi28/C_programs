
//Program to print prime digits from the given string.(Ex: s=” a123b45c”, Output:  2 3 5)

#include <stdio.h>
#include <ctype.h>

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

// Function to print prime digits from the given string
void printPrimeDigits(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a digit
        if (isdigit(str[i])) {
            int digit = str[i] - '0';  // Convert character to integer digit
            if (isPrime(digit)) {
                printf("%d ", digit);  // Print the prime digit
            }
        }
    }
    printf("\n");
}

int main() {
    char str[100];  // Array to hold the user input string
    
    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string
    
    // Call the printPrimeDigits function to print the prime digits
    printf("Prime digits in the string: ");
    printPrimeDigits(str);

    return 0;
}
