// Q133: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    enum Month { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
    const char *names[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int month;
    for (month = JANUARY; month <= DECEMBER; month++) printf("%s: %d days\n", names[month], days[month]);
    return 0;
}\n