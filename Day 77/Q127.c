// Q127: Solution in beginner-friendly C.
#include <stdio.h>
#include <ctype.h>
int main(void) {
    FILE *input = fopen("input.txt", "r");
    FILE *output;
    int ch;
    if (input == NULL) { printf("Cannot open input.txt\n"); return 1; }
    output = fopen("output.txt", "w");
    if (output == NULL) { fclose(input); printf("Cannot create output.txt\n"); return 1; }
    while ((ch = fgetc(input)) != EOF) fputc(toupper((unsigned char)ch), output);
    fclose(input);
    fclose(output);
    printf("Converted text saved in output.txt\n");
    return 0;
}
