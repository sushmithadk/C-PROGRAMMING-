// c Program to calculate the sum of first n natural -do-while loop
#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        
        do {
            sum += i; 
            i++;
        } while (i <= n); 

        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}