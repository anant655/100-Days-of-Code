// Q93: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    char a[500], b[500];
    int count[256] = {0}, i, same = 1;
    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);
    for (i = 0; a[i] != '\0' && a[i] != '\n'; i++) count[(unsigned char)a[i]]++;
    for (i = 0; b[i] != '\0' && b[i] != '\n'; i++) count[(unsigned char)b[i]]--;
    for (i = 0; i < 256; i++) if (count[i] != 0) same = 0;
    printf("%s\n", same ? "Anagrams" : "Not anagrams");
    return 0;
}
