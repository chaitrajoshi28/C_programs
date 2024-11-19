//Given a string str, if the string starts with "f" return "Fizz". If the string ends with "b" return "Buzz". If both the "f" and "b" conditions are true, return "FizzBuzz". In all other cases, return the string unchanged. (See also: FizzBuzz Code)

//fizzString("fig") → "Fizz"
//fizzString("dib") → "Buzz"
//fizzString("fib") → "FizzBuzz"

#include <stdio.h>
#include <string.h>

// Function to check the conditions and return the appropriate string
const char* fizzString(const char* str) {
    // Check if the string starts with 'f' and ends with 'b'
    if (str[0] == 'f' && str[strlen(str) - 1] == 'b') {
        return "FizzBuzz";  // Return "FizzBuzz" if both conditions are true
    }
    // Check if the string starts with 'f'
    else if (str[0] == 'f') {
        return "Fizz";  // Return "Fizz" if the string starts with 'f'
    }
    // Check if the string ends with 'b'
    else if (str[strlen(str) - 1] == 'b') {
        return "Buzz";  // Return "Buzz" if the string ends with 'b'
    }
    // If none of the conditions are true, return the string unchanged
    else {
        return str;
    }
}

int main() {
    // Test cases
    printf("%s\n", fizzString("fig"));   // Output: Fizz
    printf("%s\n", fizzString("dib"));   // Output: Buzz
    printf("%s\n", fizzString("fib"));   // Output: FizzBuzz
    printf("%s\n", fizzString("hello")); // Output: hello

    return 0;
}
