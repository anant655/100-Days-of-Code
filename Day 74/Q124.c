// Q124: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    int ch;
    printf("Enter source filename: "); scanf("%99s", sourceName);
    printf("Enter destination filename: "); scanf("%99s", destinationName);
    source = fopen(sourceName, "r");
    if (source == NULL) { printf("Cannot open source file\n"); return 1; }
    destination = fopen(destinationName, "w");
    if (destination == NULL) { fclose(source); printf("Cannot create destination file\n"); return 1; }
    while ((ch = fgetc(source)) != EOF) fputc(ch, destination);
    fclose(source);
    fclose(destination);
    printf("File copied successfully\n");
    return 0;
}\n