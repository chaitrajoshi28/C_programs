//Given 2 int values, return whichever value is nearest to the value 10, or return 0 in the event of a tie. Note that Math.abs(n) returns the absolute value of a number.
//close10(8, 13) → 8
#include <stdio.h>
#include <stdlib.h>  // For abs() function

// Function to return the number closer to 10, or 0 in case of a tie
int close10(int a, int b) {
    int diffA = abs(a - 10);  // Calculate distance of a from 10
    int diffB = abs(b - 10);  // Calculate distance of b from 10

    // Compare distances and return the closer value, or 0 if they are equal
    if (diffA < diffB) {
        return a;
    } else if (diffB < diffA) {
        return b;
    } else {
        return 0;  // Return 0 if distances are equal
    }
}

int main() {
    int a, b;

    // Get user input for the two values
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Display the result of close10 function
    printf("Result: %d\n", close10(a, b));

    return 0;
}
