//. Q: Write a program to find the sum of digits of a number.

#include <stdio.h>
int main() {
    int number, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        digit = number % 10; 
        sum += digit;      
        number /= 10;       
       }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}