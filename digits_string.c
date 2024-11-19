// Program to print digits from the given string.
#include <stdio.h>
#include <ctype.h> // Include library for character classification functions

int main() {
    char str[100]; // Define a character array to store the input string

    // Prompt user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string from user input including spaces

    // Print digits from the string
    printf("Digits in the string: ");
    for (int i = 0; str[i] != '\0'; i++) { // Loop through each character in the string
        if (isdigit(str[i])) { // Check if the character is a digit
            printf("%c", str[i]); // Print digit
        }
    }
    printf("\n"); // Newline after printing all digits

    return 0; // End of program
}
