// Q115: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    char s[500], t[500];
    int count[26] = {0}, i, same = 1;
    printf("Enter first lowercase string: "); scanf("%499s", s);
    printf("Enter second lowercase string: "); scanf("%499s", t);
    for (i = 0; s[i] != '\0'; i++) count[s[i]-'a']++;
    for (i = 0; t[i] != '\0'; i++) count[t[i]-'a']--;
    for (i = 0; i < 26; i++) if (count[i] != 0) same = 0;
    printf("%s\n", same ? "Anagram" : "Not Anagram");
    return 0;
}\n