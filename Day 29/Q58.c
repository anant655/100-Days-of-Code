// Q58: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, i, a[100], maximum, minimum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    maximum = minimum = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > maximum) maximum = a[i];
        if (a[i] < minimum) minimum = a[i];
    }
    printf("Maximum = %d\nMinimum = %d\n", maximum, minimum);
    return 0;
}\n