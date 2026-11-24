// Q91: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    char text[500];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    for (i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') text[j++] = ch;
    }
    text[j] = '\0';
    printf("Without vowels: %s", text);
    return 0;
}
