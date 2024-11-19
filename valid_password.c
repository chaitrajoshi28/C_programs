// Program to check and return true if the given string is a valid password. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if the password is valid
int isValidPassword(const char *password) {
    int length = strlen(password);  // Get the length of the password
    
    // Check if password meets minimum length requirement
    if (length < 8) {
        return 0;  // Return false if password is less than 8 characters
    }

    // Flags to check if each character type is present
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    // Loop through each character of the password to check conditions
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;  // Found an uppercase letter
        } else if (islower(password[i])) {
            hasLower = 1;  // Found a lowercase letter
        } else if (isdigit(password[i])) {
            hasDigit = 1;  // Found a digit
        } else if (!isspace(password[i])) {
            hasSpecial = 1;  // Found a special character (non-space)
        }
    }

    // Check if all required character types are present
    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    char password[100];  // Array to store the user's input password

    // Prompt the user to enter a password
    printf("Enter a password: ");
    fgets(password, sizeof(password), stdin);  // Read the password from standard input

    // Remove newline character if present at the end of input
    password[strcspn(password, "\n")] = '\0';

    // Check if the entered password meets all criteria
    if (isValidPassword(password)) {
        printf("Password is valid.\n");  // If valid, print confirmation
    } else {
        // If invalid, print requirements message
        printf("Password is invalid. It must be at least 8 characters long, contain an uppercase letter, a lowercase letter, a digit, and a special character.\n");
    }

    return 0;  // End of program
}
