//Program to check if a given character is a vowel or not. (Using else-if ladder)

#include <stdio.h>

int main() {
    char ch;

    // Prompt the user for a character input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel using else-if ladder
    if (ch == 'a' || ch == 'A') {
        printf("%c is a vowel.\n", ch);
    } 
    else if (ch == 'e' || ch == 'E') {
        printf("%c is a vowel.\n", ch);
    } 
    else if (ch == 'i' || ch == 'I') {
        printf("%c is a vowel.\n", ch);
    } 
    else if (ch == 'o' || ch == 'O') {
        printf("%c is a vowel.\n", ch);
    } 
    else if (ch == 'u' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } 
    else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0; // Indicate that the program ended successfully
}
