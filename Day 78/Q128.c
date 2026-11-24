// Q128: Solution in beginner-friendly C.\n#include <stdio.h>
#include <ctype.h>
int main(void) {
    FILE *file;
    char filename[100];
    int ch, vowels = 0, consonants = 0;
    printf("Enter filename: "); scanf("%99s", filename);
    file = fopen(filename, "r");
    if (file == NULL) { printf("Cannot open file\n"); return 1; }
    while ((ch = fgetc(file)) != EOF) {
        ch = tolower((unsigned char)ch);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
            else consonants++;
        }
    }
    fclose(file);
    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}\n