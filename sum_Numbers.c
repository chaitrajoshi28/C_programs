//Given a string, return the sum of the numbers appearing in the string, ignoring all other characters. A number is a series of 1 or more digit chars in a row. (Note: Character.isDigit(char) tests if a char is one of the chars '0', '1', .. '9'. Integer.parseInt(string) converts a string to an int.)
//sumNumbers("abc123xyz") → 123
//sumNumbers("aa11b33") → 44
//sumNumbers("7 11") → 18
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to calculate the sum of all numbers in the string
int sumNumbers(const char* str) {
    int sum = 0;
    int currentNumber = 0;
    int inNumber = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            // If it's a digit, add it to the current number
            currentNumber = currentNumber * 10 + (str[i] - '0');
            inNumber = 1;
        } else {
            // If a non-digit character is encountered, add the current number to the sum
            if (inNumber) {
                sum += currentNumber;
                currentNumber = 0;
                inNumber = 0;
            }
        }
    }

    // If the string ends with a number, add it to the sum
    if (inNumber) {
        sum += currentNumber;
    }

    return sum;
}

int main() {
    // Test cases
    printf("%d\n", sumNumbers("abc123xyz"));   // Output: 123
    printf("%d\n", sumNumbers("aa11b33"));     // Output: 44
    printf("%d\n", sumNumbers("7 11"));        // Output: 18

    return 0;
}
