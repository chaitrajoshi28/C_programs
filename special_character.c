// Program to print special characters from the given string.
#include <stdio.h>
#include <ctype.h> // Include library for character classification functions

int main() {
    char str[100]; // Define a character array to store the input string

    // Prompt user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string from user input including spaces

    // Print special characters from the string
    printf("Special characters in the string: ");
    for (int i = 0; str[i] != '\0'; i++) { // Loop through each character in the string
        // Check if the character is neither a digit nor an alphabetic character
        if (!isalnum(str[i]) && str[i] != ' ') 
        { // Check if it's not alphanumeric and not a space
            printf("%c", str[i]); // Print the special character
        }
    }
    printf("\n"); // Newline after printing all special characters

    return 0; // End of program
}
