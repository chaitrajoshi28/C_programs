//Write a program to find the minimum number among 2 numbers.
// Pseudocode: Start
// 1. Declare an integer variable `num`.
// 2. Prompt the user to "Enter an integer".
// 3. Read the value of `num`.

#include <stdio.h>
int main() {
    int num; // Declare a variable to store the user input

    // Step 2: Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Step 4: Check if the number is positive
    if (num > 0) {
        // a. If `num > 0`, print "num is a positive number".
        printf("%d is a positive number.\n", num); 
    } 
    // Step 5: Else, check if the number is negative
    else if (num < 0) {
        // a. If `num < 0`, print "num is a negative number".
        printf("%d is a negative number.\n", num); 
    } 

    // Step 6: End the program
    return 0; // Indicate that the program ended successfully
}
