// Q96: Solution in beginner-friendly C.
#include <stdio.h>
#include <string.h>
void reverse(char text[], int start, int end) {
    while (start < end) { char temp = text[start]; text[start] = text[end]; text[end] = temp; start++; end--; }
}
int main(void) {
    char sentence[500];
    int i, start = 0, length;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    length = (int)strcspn(sentence, "\n");
    for (i = 0; i <= length; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') { reverse(sentence, start, i - 1); start = i + 1; }
    }
    printf("%s\n", sentence);
    return 0;
}
