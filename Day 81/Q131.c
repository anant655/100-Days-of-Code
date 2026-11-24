// Q131: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
    const char *names[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};
    int i;
    for (i = SUNDAY; i <= SATURDAY; i++) printf("%s = %d\n", names[i], i);
    return 0;
}
