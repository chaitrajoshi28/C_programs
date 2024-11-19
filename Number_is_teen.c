//We'll say that a number is "teen" if it is in the range 13..19 inclusive. Given 3 int values, return true if 1 or more of them are teen.
//hasTeen(13, 20, 10) → true

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is in the "teen" range
bool isTeen(int num) {
    return num >= 13 && num <= 19;
}

// Function to check if any of the three numbers is a "teen"
bool hasTeen(int a, int b, int c) {
    return isTeen(a) || isTeen(b) || isTeen(c);
}

int main() {
    int a, b, c;

    // User input
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if any of the numbers is a teen and display the result
    if (hasTeen(a, b, c)) {
        printf("True - One or more numbers are in the 'teen' range.\n");
    } else {
        printf("False - None of the numbers are in the 'teen' range.\n");
    }

    return 0;
}
