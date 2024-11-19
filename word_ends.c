//Given a string and a non-empty word string, return a string made of each char just before and just after every appearance of the word in the string. Ignore cases where there is no char before or after the word, and a char may be included twice if it is between two words.
//wordEnds("abcXY123XYijk", "XY") → "c13i"
//wordEnds("XY123XY", "XY") → "13"
//wordEnds("XY1XY", "XY") → "11"

#include <stdio.h>
#include <string.h>

// Function to return a string made of each char just before and just after every appearance of the word
void wordEnds(const char* str, const char* word) {
    int len = strlen(str);
    int wordLen = strlen(word);
    char result[1000];  // Array to store the result, assuming the result length won't exceed 1000 characters
    int resultIndex = 0;

    // Loop through the string to find occurrences of the word
    for (int i = 0; i <= len - wordLen; i++) {
        // Check if the word matches at the current position
        if (strncmp(&str[i], word, wordLen) == 0) {
            // Add char before the word if it exists
            if (i > 0) {
                result[resultIndex++] = str[i - 1];
            }
            // Add char after the word if it exists
            if (i + wordLen < len) {
                result[resultIndex++] = str[i + wordLen];
            }
        }
    }

    // Null terminate the result string
    result[resultIndex] = '\0';
    
    // Print the result string
    printf("%s\n", result);
}

int main() {
    // Test cases
    wordEnds("abcXY123XYijk", "XY");  // Output: "c13i"
    wordEnds("XY123XY", "XY");         // Output: "13"
    wordEnds("XY1XY", "XY");           // Output: "11"

    return 0;
}
