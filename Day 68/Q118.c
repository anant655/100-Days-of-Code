// Q118: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, i, value, sum = 0;
    printf("Enter n (array has n values from 0 to n, one missing): ");
    scanf("%d", &n);
    if (n < 1 || n > 100000) return 1;
    for (i = 0; i < n; i++) { scanf("%d", &value); sum += value; }
    printf("Missing number = %d\n", n * (n + 1) / 2 - sum);
    return 0;
}
