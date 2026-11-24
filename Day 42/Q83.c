// Q83: Solution in beginner-friendly C.\n#include <stdio.h>
#include <ctype.h>
int main(void) {
    char text[500];
    int i, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    for (i = 0; text[i] != '\0'; i++) {
        char ch = (char)tolower((unsigned char)text[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
            else consonants++;
        }
    }
    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}\n