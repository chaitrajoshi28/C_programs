//Given a string, count the number of words ending in 'y' or 'z' -- so the 'y' in "heavy" and the 'z' in "fez" count, but not the 'y' in "yellow" (not case sensitive). We'll say that a y or z is at the end of a word if there is not an alphabetic letter immediately following it. (Note: Character.isLetter(char) tests if a char is an alphabetic letter.)
//countYZ("fez day") → 2
//countYZ("day fez") → 2
//countYZ("day fyyyz") → 2

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to count words ending in 'y' or 'z'
int countYZ(const char* str) {
    int count = 0;
    int len = strlen(str);
    int i = 0;

    while (i < len) {
        // Skip over any non-alphabetic characters (spaces or punctuation)
        if (!isalpha(str[i])) {
            i++;
            continue;
        }

        // Find the end of the current word
        int wordEnd = i;
        while (wordEnd < len && isalpha(str[wordEnd])) {
            wordEnd++;
        }

        // Check if the last letter of the word is 'y' or 'z'
        if ((str[wordEnd - 1] == 'y' || str[wordEnd - 1] == 'z') && 
            (wordEnd == len || !isalpha(str[wordEnd]))) {
            count++;
        }

        // Move i to the end of the current word
        i = wordEnd;
    }

    return count;
}

int main() {
    // Test cases
    printf("%d\n", countYZ("fez day"));    // Output: 2
    printf("%d\n", countYZ("day fez"));    // Output: 2
    printf("%d\n", countYZ("day fyyyz"));  // Output: 2

    return 0;
}
