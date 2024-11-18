//Program to implement withdrawal operation. (Using nested if-else)

#include <stdio.h>

int main() {
    float balance = 1000.0; // Initial account balance
    float withdrawAmount;

    // Prompt the user for the withdrawal amount
    printf("Enter the amount to withdraw: ");
    scanf("%f", &withdrawAmount);

    // Check if the withdrawal amount is valid
    if (withdrawAmount > 0) { // Check if the withdrawal amount is positive
        if (withdrawAmount <= balance) { // Check if there are sufficient funds
            balance -= withdrawAmount; // Deduct the withdrawal amount from the balance
            printf("Withdrawal successful! Your new balance is: $%.2f\n", balance);
        } else { // Insufficient funds case
            printf("Withdrawal failed! Insufficient funds. Your current balance is: $%.2f\n", balance);
        }
    } else { // Invalid withdrawal amount case
        printf("Withdrawal failed! Please enter a valid amount greater than zero.\n");
    }

    return 0; // Indicate that the program ended successfully
}
