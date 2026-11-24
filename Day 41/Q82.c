// Q82: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    char text[500];
    int i;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) printf("%c\n", text[i]);
    return 0;
}
