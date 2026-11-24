// Q88: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    char text[500];
    int i;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    for (i = 0; text[i] != '\0'; i++) if (text[i] == ' ') text[i] = '-';
    printf("%s", text);
    return 0;
}\n