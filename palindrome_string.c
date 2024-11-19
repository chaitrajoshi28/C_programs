//Program to return true if the user-given string is a palindrome string, else return false.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if the given string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);  // Get the length of the string
    int start = 0;             // Start index
    int end = length - 1;      // End index

    // Compare characters from start and end moving towards the middle
    while (start < end) {
        // Skip non-alphanumeric characters (for case-insensitive check)
        if (!isalnum(str[start])) {
            start++;
        } else if (!isalnum(str[end])) {
            end--;
        } else {
            // Compare characters (case-insensitive)
            if (tolower(str[start]) != tolower(str[end])) {
                return 0;  // Not a palindrome
            }
            start++;
            end--;
        }
    }

    return 1;  // The string is a palindrome
}

int main() {
    char str[100];  // Array to hold the user input string

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string

    // Remove newline character (if present) at the end of the string
    str[strcspn(str, "\n")] = '\0';

    // Call the isPalindrome function and print the result
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
