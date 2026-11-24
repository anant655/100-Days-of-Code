// Q92: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    char text[500];
    int seen[26] = {0}, i;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            int index = text[i] - 'a';
            if (seen[index]) { printf("First repeating lowercase alphabet = %c\n", text[i]); return 0; }
            seen[index] = 1;
        }
    }
    printf("No repeating lowercase alphabet\n");
    return 0;
}\n