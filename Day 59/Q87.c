// Q87: Solution in beginner-friendly C.\n#include <stdio.h>
#include <ctype.h>
int main(void) {
    char text[500];
    int i, spaces = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        if (text[i] == ' ') spaces++;
        else if (isdigit((unsigned char)text[i])) digits++;
        else if (!isalpha((unsigned char)text[i])) special++;
    }
    printf("Spaces = %d\nDigits = %d\nSpecial characters = %d\n", spaces, digits, special);
    return 0;
}\n