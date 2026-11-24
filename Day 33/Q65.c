// Q65: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, i, a[100], target, low = 0, high, mid, found = -1;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter target: ");
    scanf("%d", &target);
    high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (a[mid] == target) { found = mid; break; }
        if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    if (found == -1) printf("Not found\n");
    else printf("Found at index %d\n", found);
    return 0;
}\n