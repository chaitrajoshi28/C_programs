//Program to check the number  is even or odd without using  if else(By using a conditional operator)

#include <stdio.h>

int main() {
    int num = 10; // Predefined number to check

    // Check if the number is even or odd using the conditional operator
    (num % 2 == 0) ?
     printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    return 0; // Indicate that the program ended successfully
}
