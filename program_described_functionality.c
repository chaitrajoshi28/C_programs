//Given a string and an int n, return a string made of n repetitions of the last n characters of the string. You may assume that n is between 0 and the length of the string, inclusive.
//repeatEnd("Hello", 3) → "llollollo"
//repeatEnd("Hello", 2) → "lolo"
//repeatEnd("Hello", 1) → "o

#include <stdio.h>
#include <string.h>

// Function to repeat the last 'n' characters of the string 'n' times
void repeatEnd(const char* str, int n) {
    int len = strlen(str);

    // Check if n is valid (between 0 and length of string)
    if (n <= 0 || n > len) {
        printf("Invalid value of n.\n");
        return;
    }

    // Get the last 'n' characters from the string
    char lastNChars[n + 1];  // Extra space for the null-terminator
    strncpy(lastNChars, str + len - n, n);
    lastNChars[n] = '\0';  // Null-terminate the substring

    // Repeat the substring 'n' times and print the result
    for (int i = 0; i < n; i++) {
        printf("%s", lastNChars);
    }
    printf("\n");
}

int main() {
    // Test cases
    repeatEnd("Hello", 3);  // Output: llollollo
    repeatEnd("Hello", 2);  // Output: lolo
    repeatEnd("Hello", 1);  // Output: o

    return 0;
}
