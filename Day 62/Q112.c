// Q112: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, a[100], i, current, best;
    printf("Enter size: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    current = best = a[0];
    for (i = 1; i < n; i++) {
        if (current + a[i] < a[i]) current = a[i];
        else current += a[i];
        if (current > best) best = current;
    }
    printf("Maximum subarray sum = %d\n", best);
    return 0;
}
