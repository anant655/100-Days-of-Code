// Q123: Solution in beginner-friendly C.
#include <stdio.h>
#include <ctype.h>
int main(void) {
    FILE *file;
    int ch, characters = 0, words = 0, lines = 0, inWord = 0, last = '\n';
    char filename[100];
    printf("Enter filename: ");
    scanf("%99s", filename);
    file = fopen(filename, "r");
    if (file == NULL) { printf("File could not be opened\n"); return 1; }
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == '\n') lines++;
        if (isspace((unsigned char)ch)) inWord = 0;
        else if (!inWord) { words++; inWord = 1; }
        last = ch;
    }
    if (characters > 0 && last != '\n') lines++;
    fclose(file);
    printf("Characters = %d\nWords = %d\nLines = %d\n", characters, words, lines);
    return 0;
}
