//Look for patterns like "zip" and "zap" in the string -- length-3, starting with 'z' and ending with 'p'. Return a string where for all such words, the middle letter is gone, so "zipXzap" yields "zpXzp".
//zipZap("zipXzap") → "zpXzp"
//zipZap("zopzop") → "zpzp"
//zipZap("zzzopzop") → "zzzpzp

#include <stdio.h>
#include <string.h>

// Function to return a string where the middle letter of "zip" or "zap" patterns is removed
void zipZap(const char* str) {
    int len = strlen(str);
    char result[1000];  // Array to store the result
    int resultIndex = 0;

    for (int i = 0; i < len; i++) {
        // Check if the current substring is "zip" or "zap"
        if (i + 2 < len && str[i] == 'z' && str[i + 2] == 'p') {
            result[resultIndex++] = str[i];  // Add 'z'
            result[resultIndex++] = str[i + 2];  // Add 'p'
            i += 2;  // Skip the middle letter
        } else {
            result[resultIndex++] = str[i];  // Add current character if not part of "zip" or "zap"
        }
    }

    result[resultIndex] = '\0';  // Null terminate the result string
    printf("%s\n", result);
}

int main() {
    // Test cases
    zipZap("zipXzap");   // Output: "zpXzp"
    zipZap("zopzop");     // Output: "zpzp"
    zipZap("zzzopzop");   // Output: "zzzpzp"

    return 0;
}
