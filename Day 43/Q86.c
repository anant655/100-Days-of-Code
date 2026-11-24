// Q86: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    char text[500];
    int length = 0, i, palindrome = 1;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    while (text[length] != '\0' && text[length] != '\n') length++;
    for (i = 0; i < length / 2; i++) if (text[i] != text[length - 1 - i]) palindrome = 0;
    printf("%s\n", palindrome ? "Palindrome" : "Not palindrome");
    return 0;
}
