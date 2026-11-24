// Q69: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, i, a[100], largest, second, hasSecond = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 2 || n > 100) return 1;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    largest = a[0];
    for (i = 1; i < n; i++) if (a[i] > largest) largest = a[i];
    for (i = 0; i < n; i++) {
        if (a[i] < largest && (!hasSecond || a[i] > second)) { second = a[i]; hasSecond = 1; }
    }
    if (hasSecond) printf("Second largest = %d\n", second);
    else printf("No distinct second largest element\n");
    return 0;
}
