//Given two strings, base and remove, return a version of the base string where all instances of the remove string have been removed (not case sensitive). You may assume that the remove string is length 1 or more. Remove only non-overlapping instances, so with "xxx" removing "xx" leaves "x".
//withoutString("Hello there", "llo") → "He there"
//withoutString("Hello there", "e") → "Hllo thr"
//withoutString("Hello there", "x") → "Hello there

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to compare two strings case-insensitively
int caseInsensitiveCompare(const char* str1, const char* str2, int length) {
    // Compare each character of both strings (case-insensitive)
    for (int i = 0; i < length; i++) {
        // If characters don't match (case-insensitive), return 0 (false)
        if (tolower(str1[i]) != tolower(str2[i])) {
            return 0;  // Strings do not match
        }
    }
    // If all characters match, return 1 (true)
    return 1;
}

// Function to remove all instances of 'remove' from 'base'
void withoutString(char* base, const char* remove) {
    int baseLen = strlen(base);  // Get the length of the base string
    int removeLen = strlen(remove);  // Get the length of the remove string
    int i = 0;  // Index to iterate through the base string

    // Traverse through the base string
    while (i <= baseLen - removeLen) {
        // If the substring from base matches 'remove' case-insensitively
        if (caseInsensitiveCompare(&base[i], remove, removeLen)) {
            // Shift the remaining part of the base string to the left by 'removeLen' characters
            memmove(&base[i], &base[i + removeLen], baseLen - i - removeLen + 1);
            baseLen -= removeLen;  // Update the new length of the base string after removal
        } else {
            i++;  // Move to the next character
        }
    }
}

int main() {
    // Test case 1: Remove "llo" from "Hello there"
    char base1[] = "Hello there";  
    char remove1[] = "llo";
    withoutString(base1, remove1);  // Call the function to remove "llo"
    printf("\"%s\"\n", base1);  // Output: "He there"

    // Test case 2: Remove "e" from "Hello there"
    char base2[] = "Hello there";
    char remove2[] = "e";
    withoutString(base2, remove2);  // Call the function to remove "e"
    printf("\"%s\"\n", base2);  // Output: "Hllo thr"

    // Test case 3: Attempt to remove "x" from "Hello there" (no occurrence of "x")
    char base3[] = "Hello there";
    char remove3[] = "x";
    withoutString(base3, remove3);  // Call the function (no change)
    printf("\"%s\"\n", base3);  // Output: "Hello there"

    return 0;
}
