// Q89: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    char text[500], target;
    int i, count = 0;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    printf("Enter character: ");
    scanf(" %c", &target);
    for (i = 0; text[i] != '\0'; i++) if (text[i] == target) count++;
    printf("Frequency = %d\n", count);
    return 0;
}\n