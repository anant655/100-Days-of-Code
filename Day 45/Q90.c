// Q90: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    char text[500];
    int i;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') text[i] -= 32;
        else if (text[i] >= 'A' && text[i] <= 'Z') text[i] += 32;
    }
    printf("%s", text);
    return 0;
}\n