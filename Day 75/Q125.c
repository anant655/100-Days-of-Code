// Q125: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    FILE *file;
    char filename[100], line[500];
    printf("Enter filename: "); scanf("%99s", filename);
    file = fopen(filename, "a");
    if (file == NULL) { printf("Cannot open file\n"); return 1; }
    getchar();
    printf("Enter a line to append: ");
    fgets(line, sizeof(line), stdin);
    fputs(line, file);
    fclose(file);
    printf("Text appended successfully\n");
    return 0;
}\n