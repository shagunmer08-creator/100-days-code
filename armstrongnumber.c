//. Q: Write a program to check if a number is an Armstrong number. 
#include <stdio.h>
#include <math.h>
int main() {
    int n, original, remainder, result = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (original != 0) {
        original /= 10;
        digits++;
    }
    original = n;
    while (n != 0) {
        remainder = n % 10;
        result = pow(remainder, digits);
        n /= 10;
    }
    if (result == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }
    return 0;
}
    


  


