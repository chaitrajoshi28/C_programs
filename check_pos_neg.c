//Program to check if the number is positive or negitive.

#include <stdio.h>
int main() {
    int num; // Declare a variable to store the user input

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is positive or negative
    if (num > 0) {
        printf("%d is a positive number.\n", num); 
    } else if (num < 0) {
        printf("%d is a negative number.\n", num); 
    } 

    return 0; // Indicate that the program ended successfully
}
