// Q120: Solution in beginner-friendly C.\n#include <stdio.h>
#include <ctype.h>
int main(void) {
    char text[500];
    int i, firstLetter = 1;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    for (i = 0; text[i] != '\0'; i++) {
        if (isalpha((unsigned char)text[i])) {
            if (firstLetter) text[i] = (char)toupper((unsigned char)text[i]);
            else text[i] = (char)tolower((unsigned char)text[i]);
            firstLetter = 0;
        } else if (text[i] == '.' || text[i] == '!' || text[i] == '?') firstLetter = 1;
    }
    printf("%s", text);
    return 0;
}\n