// Q85: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    char text[500], temp;
    int length = 0, i;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    while (text[length] != '\0' && text[length] != '\n') length++;
    for (i = 0; i < length / 2; i++) {
        temp = text[i]; text[i] = text[length - 1 - i]; text[length - 1 - i] = temp;
    }
    text[length] = '\0';
    printf("Reversed string: %s\n", text);
    return 0;
}
