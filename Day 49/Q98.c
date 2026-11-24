// Q98: Solution in beginner-friendly C.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char name[300], *word, *last = NULL;
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    word = strtok(name, " \t");
    while (word != NULL) {
        if (last != NULL) printf("%c. ", (char)toupper((unsigned char)last[0]));
        last = word;
        word = strtok(NULL, " \t");
    }
    if (last != NULL) printf("%s", last);
    printf("\n");
    return 0;
}
