//The number 6 is a truly great number. Given two int values, a and b, return true if either one is 6. Or if their sum or difference is 6. Note: the function Math.abs(num) computes the absolute value of a number.
//love6(6, 4) → true
//love6(4, 5) → false
//love6(1, 5) → true
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>  // For abs() function

bool love6(int a, int b) {
    // Check if either a or b is 6, or if their sum or absolute difference is 6
    return (a == 6 || b == 6 || (a + b) == 6 || abs(a - b) == 6);
}

int main() {
    printf("%d\n", love6(6, 4));  // Output: 1 (true)
    printf("%d\n", love6(4, 5));  // Output: 0 (false)
    printf("%d\n", love6(1, 5));  // Output: 1 (true)
    return 0;
}
