//Given three ints, a b c, return true if two or more of them have the same rightmost digit. The ints are non-negative. Note: the % "mod" operator computes the remainder, e.g. 17 % 10 is 7.
//lastDigit(23, 19, 13) → true
//lastDigit(23, 19, 12) → false
//lastDigit(23, 19, 3) → true

#include <stdio.h>
#include <stdbool.h>

bool lastDigit(int a, int b, int c) {
    // Calculate the rightmost digits of a, b, and c
    int lastA = a % 10;
    int lastB = b % 10;
    int lastC = c % 10;

    // Check if two or more rightmost digits are the same
    return (lastA == lastB) || (lastA == lastC) || (lastB == lastC);
}

int main() {
    int a, b, c;

    // Prompt the user to enter three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Call the function with user input and display the result
    if (lastDigit(a, b, c)) {
        printf("true\n");  // Output "true" if two or more last digits match
    } else {
        printf("false\n"); // Output "false" if no matching last digits
    }

    return 0;
}
