// C program to perform all Arithmetic Operations ( + , - , * , / )
#include <stdio.h>

int main() {
    int num1, num2;
    int sum, sub, mult, mod;
    float div;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    
    if (num2 != 0) {
        div = (float)num1 / num2; 
        mod = num1 % num2;
    }
    else {
        div = 0; 
        mod = 0; 
        printf("Division by zero is undefined.\n");
    }

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", sub);
    printf("Product = %d\n", mult);
    printf("Quotient = %.2f\n", div);
    printf("Modulus = %d\n", mod);

    return 0;
}