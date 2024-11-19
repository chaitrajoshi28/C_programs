//Given three ints, a b c, return true if it is possible to add two of the ints to get the third.
//twoAsOne(1, 2, 3) → true
//twoAsOne(3, 1, 2) → true
//twoAsOne(3, 2, 2) → false


#include <stdio.h>
#include <stdbool.h>

// Function to check if any two of the three integers add up to the third
bool twoAsOne(int a, int b, int c) {
    // Check if any two integers add up to the third
    return (a + b == c) || (a + c == b) || (b + c == a);
}

int main() {
    int a, b, c;

    // Prompt the user to enter three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Call the function with user input and check the result
    if (twoAsOne(a, b, c)) {
        printf("true\n");  // Output "true" if condition is met
    } else {
        printf("false\n"); // Output "false" if no two integers add to the third
    }

    return 0;
}
