//Program to print numbers from the given string(Ex: s=” a137b48c”, Output: 137 48)

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to print numbers from the given string
void printNumbers(char str[]) {
    int i = 0;
    int numStarted = 0;
    char num[100];  // Temporary array to store the current number as a string

    // Loop through each character in the string
    while (str[i] != '\0') {
        // Check if the current character is a digit
        if (isdigit(str[i])) {
            if (!numStarted) {  // If the number has not started yet
                numStarted = 1;  // Mark that a number has started
            }
            // Append the current digit to the num array (forming the number)
            int length = strlen(num);
            num[length] = str[i];
            num[length + 1] = '\0';  // Null-terminate the string
        } else {
            // If a non-digit character is found and a number was being formed
            if (numStarted) {
                // Print the current number and reset the flag
                printf("%s ", num);
                numStarted = 0;  // Reset numStarted flag
                num[0] = '\0';  // Clear the num array for the next number
            }
        }
        i++;  // Move to the next character
    }

    // If a number was still being formed at the end of the string, print it
    if (numStarted) {
        printf("%s", num);
    }

    printf("\n");  // Print a new line after printing all numbers
}

int main() {
    char str[100];  // Array to hold the user input string
    
    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string from user
    
    // Call the printNumbers function to extract and print numbers from the string
    printf("Numbers in the string: ");
    printNumbers(str);

    return 0;  // End of the program
}
