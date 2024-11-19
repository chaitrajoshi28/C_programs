
//Program to return the longest possible substring that contains a unique character from the user-given string.

#include <stdio.h>
#include <string.h>

// Function to find the longest substring with all unique characters
void longestUniqueSubstring(char str[]) {
    int n = strlen(str);
    int start = 0;           // Start of the current substring
    int maxStart = 0;        // Start of the longest substring found
    int maxLength = 0;       // Length of the longest substring found
    int lastSeen[256];       // Array to keep track of the last seen position of each character

    // Initialize last seen positions of characters to -1
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    for (int end = 0; end < n; end++) {
        // If the character was seen before in the current window, adjust the start
        if (lastSeen[(int)str[end]] >= start) {
            start = lastSeen[(int)str[end]] + 1;
        }

        // Update the last seen position of the current character
        lastSeen[(int)str[end]] = end;

        // Update maxLength and maxStart if we found a longer unique substring
        if (end - start + 1 > maxLength) {
            maxLength = end - start + 1;
            maxStart = start;
        }
    }

    // Print the longest unique substring
    printf("Longest substring with unique characters: ");
    for (int i = maxStart; i < maxStart + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if it exists
    str[strcspn(str, "\n")] = '\0';

    // Call function to find and print the longest substring with unique characters
    longestUniqueSubstring(str);

    return 0;
}
