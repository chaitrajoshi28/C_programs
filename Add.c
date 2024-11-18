//Program to add two numbers.

# include<stdio.h>
int main() {

// Declare the variables to store the  two numbers and the sum 

    int num1, num2, sum;
//prompt the user for input
    printf("Enter the first number:");
  // Read the first number from user input
    scanf("%d", &num1); 

//prompt the user for the second number
printf("Enter the second number:");
// Read the second number from user input
 scanf("%d", &num2);
 // calculate sum of 2 numbers
 sum = num1+num2;
 // Display the result
 printf("The sum of %d and %d is: %d\n", num1,num2,sum);

 // Return 0 indicates succesful execution
 return 0;
}

