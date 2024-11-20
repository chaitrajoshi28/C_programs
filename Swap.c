//Program to swap two numbers with the help of the third variable.

#include <stdio.h> 

int main() {
    /* 
       Pseudocode:
       1. Start the program.
       2. Declare the variables:
        - To store the first number (a)
        - To store the second number (b)
        - To store a temporary value (temp) for swapping
       3. Display a prompt asking the user to input the first number (a).
       4. Get the input value for 'a' from the user.
       5. Display a prompt asking the user to input the second number (b).
       6. Get the input value for 'b' from the user.
       7. Display the values of 'a' and 'b' before swapping.
       8. Swap the values:
          - Store 'a' in 'temp' (temp = a)
          - Assign the value of 'b' to 'a' (a = b)
          - Assign the value of 'temp' to 'b' (b = temp)
       9. Display the new values of 'a' and 'b' after swapping.
       10. End the program.
    */

    // Step 2: Declare variables for a, b, and temp
    int a, b, temp;

    // Step 3: Prompt the user to enter the first number (a)
    printf("Enter the first number (a): ");
    
    // Step 4: Read the first number from the user
    scanf("%d", &a);

    // Step 5: Prompt the user to enter the second number (b)
    printf("Enter the second number (b): ");
    
    // Step 6: Read the second number from the user
    scanf("%d", &b);

    // Step 7: Display the values of a and b before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Step 8: Swap the values using the temporary variable temp
    temp = a; // Store the value of a in temp
    a = b;    // Assign the value of b to a
    b = temp; // Assign the value stored in temp to b

    // Step 9: Display the new values of a and b after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    // Step 10: End the program
    return 0;
}
