//Letters//
#include <stdio.h>

int main() {
    // Define an array of characters to print
    char characters[] = {'B', 'S', 'T', 'I', 'L', 'H', 'D', 'P', 'O', 'U', '7', '9'};
    int size = sizeof(characters) / sizeof(characters[0]); // Calculate number of characters

    // Loop through the array to print each character
    printf("Pattern:\n");
    for (int i = 0; i < size; i++) {
        printf("%c ", characters[i]); // Print each character followed by a space
    }
    printf("\n"); // Print a new line at the end

    return 0; // Indicate that the program ended successfully
}
