//.Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main() {
    char character;
    printf("enter a character");
    scanf(" %c", &character);
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        printf("vowel");
    } else {
        printf("consonant");
    }
    return 0;
}