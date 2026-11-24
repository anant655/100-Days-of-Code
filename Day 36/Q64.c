// Q64: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    long long number;
    int frequency[10] = {0}, digit, i, best = 0;
    printf("Enter an integer: ");
    scanf("%lld", &number);
    if (number < 0) number = -number;
    if (number == 0) frequency[0] = 1;
    while (number > 0) { digit = number % 10; frequency[digit]++; number /= 10; }
    for (i = 1; i < 10; i++) if (frequency[i] > frequency[best]) best = i;
    printf("Most frequent digit = %d (frequency %d)\n", best, frequency[best]);
    return 0;
}\n