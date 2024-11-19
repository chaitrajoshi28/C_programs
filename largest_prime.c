//Program to check and return the largest prime number from the array.

#include <stdio.h>
#include <limits.h>  // For INT_MIN

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

// Function to find the largest prime number in an array
int findLargestPrime(int arr[], int size) {
    int largestPrime = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i]) && arr[i] > largestPrime) {
            largestPrime = arr[i];
        }
    }

    return (largestPrime == INT_MIN) ? -1 : largestPrime; // Return -1 if no prime number is found
}

int main() {
    int arr[] = {12, 17, 4, 9, 13, 7, 21};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largestPrime = findLargestPrime(arr, size);

    if (largestPrime == -1) {
        printf("No prime numbers found in the array.\n");
    } else {
        printf("The largest prime number in the array is: %d\n", largestPrime);
    }

    return 0;
}
