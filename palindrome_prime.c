//Program to print all palindrome-prime numbers from the user-given range.
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int reversed = 0, original = num, remainder;
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int start, end;

    // Prompt user for range
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("Palindrome prime numbers between %d and %d are:\n", start, end);

    // Loop through the range and check for palindrome prime numbers
    for (int i = start; i <= end; i++) {
        if (isPrime(i) && isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
