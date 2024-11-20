//Program to check the number  is even or odd without using  if else(By using a conditional operator)

// Pseudocode: Start program
// 1. Declare an integer variable `num` and assign it a value.
// 2. Use a conditional operator to check if `num % 2 == 0`.
//    a. If true, print "<num> is even".
//    b. If false, print "<num> is odd".
// 3. End the program.

#include <stdio.h>

int main() {
    int num = 10; // Step 1: Predefined number to check

    // Step 2: Check if the number is even or odd using the conditional operator
    (num % 2 == 0) ? 
        printf("%d is even.\n", num) :  // Step 2a: Print if the number is even
        printf("%d is odd.\n", num);   // Step 2b: Print if the number is odd

    return 0; // Step 3: Indicate that the program ended successfully
}

