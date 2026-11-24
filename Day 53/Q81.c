// Q81: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    char text[500];
    int i = 0;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    while (text[i] != '\0' && text[i] != '\n') i++;
    printf("Length = %d\n", i);
    return 0;
}\n