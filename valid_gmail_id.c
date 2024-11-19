//Program to check and return true if the given string is a valid Gmail ID.
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

// Function to check if a given string is a valid Gmail ID
bool isValidGmailID(const char email[]) {
    int length = strlen(email);
    const char *gmailDomain = "@gmail.com";
    int domainLength = strlen(gmailDomain);

    // Check if the email ends with "@gmail.com"
    if (length <= domainLength || strcmp(&email[length - domainLength], gmailDomain) != 0) {
        return false;
    }

    // Loop through the username part (before "@gmail.com")
    for (int i = 0; i < length - domainLength; i++) {
        // First character must be alphanumeric
        if (i == 0 && !isalnum(email[i])) {
            return false;
        }
        // Only alphanumeric characters and periods are allowed
        if (!isalnum(email[i]) && email[i] != '.') {
            return false;
        }
    }

    // If all conditions are met, the Gmail ID is valid
    return true;
}

int main() {
    char email[100];

    // Prompt the user to enter a Gmail ID
    printf("Enter a Gmail ID: ");
    scanf("%s", email);

    // Check and print if the given email is a valid Gmail ID
    if (isValidGmailID(email)) {
        printf("The Gmail ID is valid.\n");
    } else {
        printf("The Gmail ID is not valid.\n");
    }

    return 0;
}
