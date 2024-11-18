//Program to return the reverse of a user-given number.
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10;              // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append it to the reversed number
        num /= 10;                         // Remove the last digit from the original number
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0; // Indicate that the program ended successfully
}
