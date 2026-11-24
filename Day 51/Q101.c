// Q101: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, a[100], target, i, first = -1, last = -1;
    printf("Enter size: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter sorted array: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter target: "); scanf("%d", &target);
    for (i = 0; i < n; i++) if (a[i] == target) { if (first == -1) first = i; last = i; }
    if (first == -1) printf("-1 -1\n");
    else printf("First occurrence: %d (index %d)\nLast occurrence: %d (index %d)\n", a[first], first, a[last], last);
    return 0;
}\n