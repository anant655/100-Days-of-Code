// Q97: Solution in beginner-friendly C.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char name[300];
    int i, atWordStart = 1;
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    for (i = 0; name[i] != '\0'; i++) {
        if (!isspace((unsigned char)name[i]) && atWordStart) { printf("%c. ", (char)toupper((unsigned char)name[i])); atWordStart = 0; }
        if (isspace((unsigned char)name[i])) atWordStart = 1;
    }
    printf("\n");
    return 0;
}
