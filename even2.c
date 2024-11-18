//Program to check  the number is even or odd.s
#include <stdio.h>

int main() {
    int num; // Declare a variable to store the user input

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is even or odd using bitwise AND
    if ((num & 1) == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0; // Indicate that the program ended successfully
}
