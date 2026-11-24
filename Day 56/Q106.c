// Q106: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, a[100], i, j, next;
    printf("Enter size: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        next = -1;
        for (j = i + 1; j < n; j++) if (a[j] > a[i]) { next = a[j]; break; }
        printf("%d", next);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
    return 0;
}
