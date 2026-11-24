// Q126: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    FILE *file;
    char filename[100];
    int ch;
    printf("Enter filename: "); scanf("%99s", filename);
    file = fopen(filename, "r");
    if (file == NULL) { printf("Error: file does not exist or cannot be opened\n"); return 1; }
    while ((ch = fgetc(file)) != EOF) putchar(ch);
    fclose(file);
    return 0;
}
