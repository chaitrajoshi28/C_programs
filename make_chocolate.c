//We want make a package of goal kilos of chocolate. We have small bars (1 kilo each) and big bars (5 kilos each). Return the number of small bars to use, assuming we always use big bars before small bars. Return -1 if it can't be done.
//makeChocolate(4, 1, 9) → 4



#include <stdio.h>

int makeChocolate(int small, int big, int goal) {
    int maxBigBars = goal / 5;  // Maximum number of big bars we could use
    int bigBarsToUse = (maxBigBars <= big) ? maxBigBars : big;  // Use as many big bars as possible, but no more than available
    int remainingWeight = goal - (bigBarsToUse * 5);  // Calculate the remaining weight after using big bars

    // Check if the remaining weight can be covered by small bars
    if (remainingWeight <= small) {
        return remainingWeight;  // Return the number of small bars needed
    } else {
        return -1;  // Return -1 if it's not possible to reach the goal with the available bars
    }
}

int main() {
    printf("%d\n", makeChocolate(4, 1, 9));  // Output: 4
    printf("%d\n", makeChocolate(4, 1, 10)); // Output: -1
    printf("%d\n", makeChocolate(4, 1, 7));  // Output: 2
    return 0;
}
