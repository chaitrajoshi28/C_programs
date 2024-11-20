//Program to check and return true if the number is even.
#include <stdio.h>

int main() {
    // Step 1: Declare a variable to store the number
    int num;

    // Step 2: Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num); // Read the integer from the user

    // Step 3: Check if the number is divisible by 2
    if(num % 2 == 0)
        // Step 4: If true, the number is even
        printf("%d is even.", num);
    else
        // Step 5: If false, the number is odd
        printf("%d is odd.", num);

    // Step 6: End the program
    return 0; // Indicate that the program ended successfully
}
