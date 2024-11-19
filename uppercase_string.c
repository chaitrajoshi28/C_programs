// Program to print uppercase characters from the given string.

#include <stdio.h>
#include <ctype.h> // Include library for character classification functions

int main() {
    char str[100]; // Define a character array to store the input string

    // Prompt user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string from user input including spaces

    // Print uppercase characters
    printf("Uppercase characters in the string: ");
    for (int i = 0; str[i] != '\0'; i++) { // Loop through each character in the string
        if (isupper(str[i])) { // Check if the character is uppercase
            printf("%c", str[i]); // Print uppercase character
        }
    }
    printf("\n"); // Newline after printing all uppercase characters

    return 0; // End of program
}
