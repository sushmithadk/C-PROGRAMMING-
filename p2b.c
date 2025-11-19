//C program for Input and Display Various Data Types
#include <stdio.h>
        
int main() {
    int integer_value;
    float float_value;
    double double_value;
    char character_value;
    char string_value[50];
    printf("Enter an integer: ");
    scanf("%d", &integer_value);
    printf("Enter a floating-point number (float): ");
    scanf("%f", &float_value);
     printf("Enter a double-precision floating-point number (double): ");
    scanf("%lf", &double_value);
    printf("Enter a character: ");
    scanf(" %c", &character_value);
     printf("Enter a string: ");
    scanf("%s", string_value);
     printf("\n--- Displaying Entered Values ---\n");
    printf("Integer: %d\n", integer_value);
    printf("Float: %f\n", float_value);
    printf("Double: %lf\n", double_value);
    printf("Character: %c\n", character_value);
    printf("String: %s\n", string_value);

    return 



































