
//Program to sub two numbers.
# include<stdio.h>
int main() {

    // Declare the variables to store the  two numbers and the difference

    int num1, num2, difference;
//prompt the user for the first number
    printf("Enter the first number:");
     // Read the first number from user input
    scanf("%d", &num1); 

//prompt the user for the second number
printf("Enter the second number:");
// Read the second number from user input
 scanf("%d", &num2);
 // calculate the  difference between of 2 numbers
 difference = num1 - num2;
 // Display the result
 printf("The difference of %d and %d is: %d\n", num1,num2,difference);

 // Return 0 indicates succesful execution
 return 0;
}
