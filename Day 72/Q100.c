// Q100: Solution in beginner-friendly C.\n#include <stdio.h>
#include <string.h>
int main(void) {
    char text[100];
    int i, j, length;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    length = (int)strcspn(text, "\n");
    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            printf("%.*s\n", j - i + 1, text + i);
        }
    }
    return 0;
}\n