//Given a string, return the longest substring that appears at both the beginning and end of the string without overlapping. For example, sameEnds("abXab") is "ab".
//sameEnds("abXYab") → "ab"
//sameEnds("xx") → "x"
//sameEnds("xxx") → "x"

#include <stdio.h>
#include <string.h>

// Function to return the longest substring that appears at both the beginning and end of the string
char* sameEnds(const char* str) {
    int len = strlen(str);
    static char result[100];  // Array to store the result
    int maxLength = 0;

    // Check for the longest matching prefix and suffix
    for (int i = 1; i <= len / 2; i++) {
        if (strncmp(str, str + len - i, i) == 0) {
            maxLength = i;  // Update the length of the matching substring
        }
    }

    // Copy the result substring to 'result' array
    strncpy(result, str, maxLength);
    result[maxLength] = '\0';  // Null terminate the result string

    return result;
}

int main() {
    // Test cases
    printf("\"%s\"\n", sameEnds("abXYab"));  // Output: "ab"
    printf("\"%s\"\n", sameEnds("xx"));      // Output: "x"
    printf("\"%s\"\n", sameEnds("xxx"));     // Output: "x"
    

    return 0;
} 
