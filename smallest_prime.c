//Program to check and return the smallest prime number from the array.

#include <stdio.h>
#include <limits.h>  // For INT_MAX

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
    return 1; // Prime number
}

// Function to find the smallest prime number in an array
int findSmallestPrime(int arr[], int size) {
    int smallestPrime = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i]) && arr[i] < smallestPrime) {
            smallestPrime = arr[i];
        }
    }

    return (smallestPrime == INT_MAX) ? -1 : smallestPrime; // Return -1 if no prime number is found
}

int main() {
    int arr[] = {12, 17, 4, 9, 13, 7, 21};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallestPrime = findSmallestPrime(arr, size);

    if (smallestPrime == -1) {
        printf("No prime numbers found in the array.\n");
    } else {
        printf("The smallest prime number in the array is: %d\n", smallestPrime);
    }

    return 0;
}
