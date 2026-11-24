// Q122: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    FILE *file = fopen("info.txt", "r");
    char line[200];
    if (file == NULL) { printf("Unable to open info.txt\n"); return 1; }
    while (fgets(line, sizeof(line), file) != NULL) printf("%s", line);
    fclose(file);
    return 0;
}
