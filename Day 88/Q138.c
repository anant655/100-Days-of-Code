// Q138: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    enum Level { LOW, MEDIUM, HIGH };
    const char *names[] = {"LOW", "MEDIUM", "HIGH"};
    int i;
    for (i = LOW; i <= HIGH; i++) printf("%s = %d\n", names[i], i);
    return 0;
}\n