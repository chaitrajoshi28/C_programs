
//Program to return the longest substring from the array that contains the maximum number of vowels.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 100 

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch); // Convert character to lowercase to handle both cases
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to find the longest substring with the maximum vowels
void findLongestSubstringWithMaxVowels(char str[], char result[]) {
    int maxVowels = 0, currentVowels = 0;
    int start = 0, maxStart = 0, maxLen = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        // If the current character is a vowel, increment the vowel count
        if (isVowel(str[i])) {
            currentVowels++;
        }

        // If we encounter a space or reach the end of the string, check the substring
        if (str[i] == ' ' || i == len - 1) {
            int currentLen = i - start + (i == len - 1 ? 1 : 0); // Adjust length if at end of string
            
            // Update maxVowels and maxLen if this substring has more vowels or is longer
            if (currentVowels > maxVowels || 
               (currentVowels == maxVowels && currentLen > maxLen)) {
                maxVowels = currentVowels;
                maxLen = currentLen;
                maxStart = start;
            }
            
            // Reset for the next substring
            currentVowels = 0;
            start = i + 1;
        }
    }

    // Copy the longest substring with the maximum vowels to the result
    strncpy(result, str + maxStart, maxLen);
    result[maxLen] = '\0'; // Null-terminate the result string
}

int main() {
    char str[MAX_LEN], result[MAX_LEN];

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, MAX_LEN, stdin);

    // Remove newline character from the end of the string if present
    str[strcspn(str, "\n")] = '\0';

    // Find and display the longest substring with the maximum vowels
    findLongestSubstringWithMaxVowels(str, result);
    printf("Longest substring with maximum vowels: %s\n", result);

    return 0;
}
