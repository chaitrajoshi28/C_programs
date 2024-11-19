//Return true if the string "cat" and "dog" appear the same number of times in the given string.

//catDog("catdog") → true
//catDog("catcat") → false
//catDog("1cat1cadodog") → true

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if "cat" and "dog" appear the same number of times
bool catDog(const char* str) {
    int catCount = 0;
    int dogCount = 0;
    int len = strlen(str);

    // Loop through the string and count occurrences of "cat" and "dog"
    for (int i = 0; i <= len - 3; i++) {
        if (str[i] == 'c' && str[i+1] == 'a' && str[i+2] == 't') {
            catCount++;  // Found "cat", increment count
        }
        if (str[i] == 'd' && str[i+1] == 'o' && str[i+2] == 'g') {
            dogCount++;  // Found "dog", increment count
        }
    }

    // Return true if "cat" and "dog" appear the same number of times
    return catCount == dogCount;
}

int main() {
    // Test cases
    printf("%d\n", catDog("catdog"));      // Output: 1 (true)
    printf("%d\n", catDog("catcat"));      // Output: 0 (false)
    printf("%d\n", catDog("1cat1cadodog")); // Output: 1 (true)

    return 0;
}
