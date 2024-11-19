//The parameter weekday is true if it is a weekday, and the parameter vacation is true if we are on vacation. We sleep in if it is not a weekday or we're on vacation. Return true if we sleep in.
//sleepIn(false, false) → true
//sleepIn(true, false) → false
//sleepIn(false, true) → true 

#include <stdio.h>
#include <stdbool.h>

// Function to determine if we can sleep in
bool sleepIn(bool weekday, bool vacation) {
    // We sleep in if it is not a weekday or if we are on vacation
    return !weekday || vacation;
}

int main() {
    bool weekday, vacation;

    // Input from user for whether it is a weekday (1 for true, 0 for false)
    printf("Is it a weekday? (1 for true, 0 for false): ");
    scanf("%d", (int *)&weekday);

    // Input from user for whether we are on vacation (1 for true, 0 for false)
    printf("Are we on vacation? (1 for true, 0 for false): ");
    scanf("%d", (int *)&vacation);

    // Call the sleepIn function and print the result
    if (sleepIn(weekday, vacation)) {
        printf("We can sleep in: True\n");
    } else {
        printf("We can sleep in: False\n");
    }

    return 0;
}
