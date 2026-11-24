// Q61: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, i, a[100], target, found = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++) if (a[i] == target) { found = i; break; }
    if (found == -1) printf("Element not found\n");
    else printf("Element found at index %d\n", found);
    return 0;
}
