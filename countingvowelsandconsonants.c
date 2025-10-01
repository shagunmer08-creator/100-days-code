//.Q: Count vowels and consonants in a string.


#include <stdio.h>
int main() {
    char str[1000];
    int vowels = 0, consonants = 0;

    
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}