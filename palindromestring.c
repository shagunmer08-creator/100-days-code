//.Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    int isPalindrome = 1; 
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }
    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}