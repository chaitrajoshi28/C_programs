//Given an int n, return the absolute difference between n and 21, except return double the absolute difference if n is over 21.
//diff21(19) → 2
//diff21(10) → 11


#include <stdio.h>
#include <stdlib.h> // For abs function

int diff21(int n) {
    // Check if n is greater than 21
    if (n > 21) {
        // Return double the absolute difference
        return 2 * abs(n - 21);
    } else {
        // Return the absolute difference
        return abs(n - 21);
    }
}

int main() {
    int n;

    // Enter  input
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Call the function and display the result
    printf("Difference is: %d\n", diff21(n));

    return 0;
}
