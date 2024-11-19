
//Given 3 int values, a b c, return their sum. However, if one of the values is the same as another of the values, it does not count towards the sum.
//loneSum(1, 2, 3) → 6
//loneSum(3, 2, 3) → 2
//loneSum(3, 3, 3) → 0
#include <stdio.h>

// Function to calculate the lone sum based on the conditions
int loneSum(int a, int b, int c) {
    int sum = 0;

    // Check if 'a' is unique
    if (a != b && a != c) {
        sum += a;
    }

    // Check if 'b' is unique
    if (b != a && b != c) {
        sum += b;
    }

    // Check if 'c' is unique
    if (c != a && c != b) {
        sum += c;
    }

    return sum;
}

int main() {
    int a, b, c;
    
    // Get input values from the user
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Calculate and display the result
    printf("Lone Sum: %d\n", loneSum(a, b, c));

    return 0;
}
