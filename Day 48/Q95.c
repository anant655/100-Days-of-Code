// Q95: Solution in beginner-friendly C.
#include <stdio.h>
#include <string.h>
int main(void) {
    char a[250], b[250], joined[500];
    size_t n, m;
    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    n = strlen(a); m = strlen(b);
    if (n != m) { printf("Not a rotation\n"); return 0; }
    strcpy(joined, a); strcat(joined, a);
    printf("%s\n", strstr(joined, b) ? "Rotation" : "Not a rotation");
    return 0;
}
