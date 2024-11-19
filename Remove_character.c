// Given a non-empty string and an int n, return a new string where the char at index n has been removed. The value of n will be a valid index of a char in the original string (i.e. n will be in the range 0..str.length()-1 inclusive).
//missingChar("kitten", 1) → "ktten"
//missingChar("kitten", 0) → "itten"

#include <stdio.h>
#include <string.h>

// Function to remove the character at index n
void missingChar(char str[], int n) {
    int length = strlen(str);

    // Loop through the string, skipping the character at index n
    for (int i = n; i < length - 1; i++) {
        str[i] = str[i + 1]; // Shift characters to the left
    }

    str[length - 1] = '\0'; // Null-terminate the modified string
}

int main() {
    char str[100];
    int n;

    // Get input string and index from the user
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the index to remove: ");
    scanf("%d", &n);

    // Check if index is within bounds
    if (n >= 0 && n < strlen(str)) {
        missingChar(str, n);
        printf("New string: %s\n", str);
    } else {
        printf("Invalid index!\n");
    }

    return 0;
}
