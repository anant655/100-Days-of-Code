// Q114: Solution in beginner-friendly C.
#include <stdio.h>
#include <string.h>
int main(void) {
    char s[500];
    int last[256], i, start = 0, best = 0, length;
    for (i = 0; i < 256; i++) last[i] = -1;
    printf("Enter a string: "); fgets(s, sizeof(s), stdin);
    length = (int)strcspn(s, "\n");
    for (i = 0; i < length; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (last[ch] >= start) start = last[ch] + 1;
        last[ch] = i;
        if (i - start + 1 > best) best = i - start + 1;
    }
    printf("Longest substring length = %d\n", best);
    return 0;
}
