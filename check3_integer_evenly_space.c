//Given three ints, a b c, one of them is small, one is medium and one is large. Return true if the three values are evenly spaced, so the difference between small and medium is the same as the difference between medium and large.
//evenlySpaced(2, 4, 6) → true
//evenlySpaced(4, 6, 2) → true
//evenlySpaced(4, 6, 3) → false


#include <stdio.h>

int evenlySpaced(int a, int b, int c) {
    int small, medium, large;
    
    // Determine the small, medium, and large values
    if (a <= b && a <= c) {
        small = a;
        if (b <= c) {
            medium = b;
            large = c;
        } else {
            medium = c;
            large = b;
        }
    } else if (b <= a && b <= c) {
        small = b;
        if (a <= c) {
            medium = a;
            large = c;
        } else {
            medium = c;
            large = a;
        }
    } else {
        small = c;
        if (a <= b) {
            medium = a;
            large = b;
        } else {
            medium = b;
            large = a;
        }
    }
    
    // Check if the differences between small-medium and medium-large are the same
    return (medium - small == large - medium);
}

int main() {
    int a, b, c;

    // Taking input from the user
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if they are evenly spaced and print the result
    if (evenlySpaced(a, b, c)) {
        printf("The numbers %d, %d, and %d are evenly spaced.\n", a, b, c);
    } else {
        printf("The numbers %d, %d, and %d are not evenly spaced.\n", a, b, c);
    }

    return 0;
}
