//.Q: Print each character of a string on a new line.

#include <stdio.h>
int main() {
    char str[1000];

    
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') { 
            printf("%c\n", str[i]);
        }
    }

    return 0;
}