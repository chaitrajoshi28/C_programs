//Program to mul two numbers.
# include<stdio.h>
int main() {

    // Declare the variables to store the  two numbers and the multiplication

    int num1, num2, mul;
//prompt the user for the first number
    printf("Enter the first number:");
     // Read the first number from user input
    scanf("%d", &num1); 

//prompt the user for the second number
printf("Enter the second number:");
// Read the second number from user input
 scanf("%d", &num2);
 // multiply 2 numbers add store in mul variable 
 mul = num1 *num2;
 // Display the result
 printf("Multiplication of %d and %d is: %d\n", num1,num2,mul);

 // Return 0 indicates succesful execution
 return 0;
} 