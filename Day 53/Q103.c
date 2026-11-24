// Q103: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, a[100], i, total = 0, left = 0, answer = -1;
    printf("Enter size: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    for (i = 0; i < n; i++) { scanf("%d", &a[i]); total += a[i]; }
    for (i = 0; i < n; i++) {
        total -= a[i];
        if (left == total) { answer = i; break; }
        left += a[i];
    }
    printf("Pivot index = %d\n", answer);
    return 0;
}
