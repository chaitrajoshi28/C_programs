//You are driving a little too fast, and a police officer stops you. Write code to compute the result, encoded as an int value: 0=no ticket, 1=small ticket, 2=big ticket. If speed is 60 or less, the result is 0. If speed is between 61 and 80 inclusive, the result is 1. If speed is 81 or more, the result is 2. Unless it is your birthday -- on that day, your speed can be 5 higher in all cases.
//caughtSpeeding(60, false) → 0
//caughtSpeeding(65, false) → 1
//caughtSpeeding(65, true) → 0


#include <stdio.h>
#include <stdbool.h>

int caughtSpeeding(int speed, bool isBirthday) {
    // Adjust speed limit if it is the user's birthday
    int limit1 = isBirthday ? 65 : 60;  // No ticket limit
    int limit2 = isBirthday ? 85 : 80;  // Small ticket limit

    if (speed <= limit1) {
        return 0;  // No ticket
    } else if (speed <= limit2) {
        return 1;  // Small ticket
    } else {
        return 2;  // Big ticket
    }
}

int main() {
    printf("%d\n", caughtSpeeding(60, false));  // Output: 0
    printf("%d\n", caughtSpeeding(65, false));  // Output: 1
    printf("%d\n", caughtSpeeding(65, true));   // Output: 0
    return 0;
}
