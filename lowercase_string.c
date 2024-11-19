
// Program to print lowercase characters from the given string.
#include <stdio.h>
#include <ctype.h> // for islower()

int main() {
    char str[100];

    // Prompt user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Print lowercase characters
    printf("Lowercase characters in the string: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) { // Check if the character is lowercase
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}
