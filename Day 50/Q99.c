// Q99: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int day, year;
    char date[30];
    const char *month = "Apr";
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%29s", date);
    if (sscanf(date, "%d/%*d/%d", &day, &year) != 2 || day < 1 || day > 30) {
        printf("Invalid date\n"); return 1;
    }
    printf("%02d-%s-%04d\n", day, month, year);
    return 0;
}\n