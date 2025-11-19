//c program for comma operator
#include <stdio.h>

int main() {
    int x;
    x = (5 + 3, 10 + 2, 100);
    printf("Value of x after (5 + 3, 10 + 2, 100): %d\n", x);
    return 0 ;
}