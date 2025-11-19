// c program for Nested if: positive of two numbers
#include <stdio.h>
int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
     if (num1 > 0) 
    
     if (num2 > 0) 
     printf("Both numbers (%d and %d) are positive.\n", num1, num2);
     else 
    printf("The first number (%d) is positive, but the second number (%d) is not.\n", num1, num2);
        
    else 
    printf("The first number (%d) is not positive.\n", num1);
    

    return 0;
}