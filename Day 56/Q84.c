// Q84: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    char text[500];
    int i;
    printf("Enter a lowercase string: ");
    fgets(text, sizeof(text), stdin);
    for (i = 0; text[i] != '\0'; i++)
        if (text[i] >= 'a' && text[i] <= 'z') text[i] = text[i] - 'a' + 'A';
    printf("Uppercase: %s", text);
    return 0;
}\n