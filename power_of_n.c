//Program to check and return true if a user-given number is the power of n, else return false.
#include <stdio.h>
#include<stdbool.h>
// Function  to check if 'number' is a power of 'base'
bool  isPowerOf(int number, int base) {
    // If the number is less than 1 or base is less than 2 ,return false
    if(number < 1 || base < 2) {
        return false; // Invalid input for power check
  }

  // Loop to continuosly divide number by 'base' if divisible 
  while (number % base == 0) {
      number /=base; //Divide number by base
  }
  // if number is reduced to 1, then it is a power of base
  return (number == 1);
}
int main() {
    int number , base;
    //   prompt the user to enter a number
    printf("Enter the number:");
    scanf("%d", &number);

    //prompt the user to enter a base
    printf("Enter the base:");
    scanf("%d", &base);

    // call the function and check the result
    if (isPowerOf(number,base)) {
        printf("%d is a power of %d.\n", number, base); // True case
    } else {
        printf(" %d is not a power of %d.\n", number, base); // False case
  }
    return 0; 
}