//C program for receiving an input from the user at runtime and printing it 
#include <stdio.h>
int main() {
    int number;
    printf("enter the value of integer");
    scanf("%d\n",&number);
    printf("You entered: %d\n", number);
    return 0;
}