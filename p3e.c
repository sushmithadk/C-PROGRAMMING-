// c program for logical operator
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c = 12;
    int d = 7;
    if (a > b && c > d) 
        printf("Logical AND: Both conditions (a > b and c > d) are true.\n");
     else 
        printf("Logical AND: At least one condition is false.\n");
        
    if (a > c || b < d) 
        printf("Logical OR: At least one condition (a > c or b < d) is true.\n");
     else 
        printf("Logical OR: Both conditions are false.\n");

     if (!(a < b)) 
        printf("Logical NOT: The condition (a < b) is false, so !(a < b) is true.\n");
      else 
        printf("Logical NOT: The condition (a < b) is true, so !(a < b) is false.\n");
        
         if ((a > b && c < d) || !(a == b)) 
        printf("Combined Logical Operators: The complex condition is true.\n");
     else 
        printf("Combined Logical Operators: The complex condition is false.\n");
    
    return 0;
}