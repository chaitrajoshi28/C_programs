//Program to check and return true if the given string is a valid user-id.
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

// Function to check if the given string is a valid user ID
bool isValidUserID(const char userID[]) {
    int length = strlen(userID);  // Calculate the length of the user ID

    // Check if length is between 6 and 12
    if (length < 6 || length > 12) {
        return false;  // Return false if the length is not within the range
    }

    // Check if the first character is a letter
    if (!isalpha(userID[0])) {
        return false;  // Return false if the first character is not a letter
    }

    // Loop through each character in the user ID
    for (int i = 0; i < length; i++) {
        // Check that all characters are alphanumeric (letters or digits)
        if (!isalnum(userID[i])) {
            return false;  // Return false if any character is not alphanumeric
        }
    }

    // If all conditions are met, return true indicating a valid user ID
    return true;
}

// Main function
int main() {
    char userID[50];  // Declare a character array to store the user ID input

    // Prompt the user to enter a user ID
    printf("Enter a user ID: ");
    scanf("%s", userID);  // Read the user ID from standard input

    // Call the isValidUserID function and check if the user ID is valid
    if (isValidUserID(userID)) {
        printf("The user ID is valid.\n");  // Print if the user ID is valid
    } else {
        printf("The user ID is not valid.\n");  // Print if the user ID is invalid
    }

    return 0;  // End of the program
}
