
//Given a string, take the last char and return a new string with the last char added at the front and back, so "cat" yields "tcatt". The original string will be length 1 or more.
//backAround("cat") → "tcatt"

#include <stdio.h>
#include <string.h>

void backAround(char str[]) {
    int len = strlen(str);  // Get the length of the input string
    char newStr[len + 3];   // New string to store the result (+3 for last char at front, back, and null terminator)

    char lastChar = str[len - 1];  // Get the last character of the input string

    newStr[0] = lastChar;  // Set the last character at the beginning
    strcpy(&newStr[1], str);  // Copy the original string after the first character
    newStr[len + 1] = lastChar;  // Append the last character at the end
    newStr[len + 2] = '\0';  // Null-terminate the new string

    printf("Result: %s\n", newStr);  // Output the result
}

int main() {
    char str[100];  // Array to hold input string, up to 99 characters
    printf("Enter a string: ");
    scanf("%s", str);  // Get the input string

    backAround(str);  // Call the function to process and print the new string

    return 0;
}
