//Return true if the given string contains between 1 and 3 'e' chars.
//stringE("Hello") → true
//stringE("Heelele") → false

#include <stdio.h>

// Function to check if a string has between 1 and 3 'e' characters
int stringE(const char *str) {
    int count = 0;
    // Iterate through the string to count occurrences of 'e'
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'e') {
            count++;
        }
    }
    // Return true (1) if count is between 1 and 3, otherwise false (0)
    return (count >= 1 && count <= 3);
}

int main() {
    char str[100];
    
    // Prompt user for input
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Call the function and print the result
    if (stringE(str)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
