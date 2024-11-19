
//Program to read and print a string from the user.
#include <stdio.h>

int main() {
    char str[100];  // Define a character array to hold the string

    // Prompt the user to enter a string
    printf("Enter a string: ");
    
    // Read the string from the user (up to 99 characters to leave room for the null terminator)
    fgets(str, sizeof(str), stdin);

    // Print the string entered by the user
    printf("You entered: %s", str);

    return 0;
}
