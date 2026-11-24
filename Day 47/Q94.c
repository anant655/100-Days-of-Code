// Q94: Solution in beginner-friendly C.
#include <stdio.h>
#include <string.h>
int main(void) {
    char sentence[500], longest[500] = "";
    char *word;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    word = strtok(sentence, " \t\n");
    while (word != NULL) {
        if (strlen(word) > strlen(longest)) strcpy(longest, word);
        word = strtok(NULL, " \t\n");
    }
    printf("Longest word = %s\n", longest);
    return 0;
}
