// Q111: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, k, a[100], i, j, first;
    printf("Enter size and window size k: "); scanf("%d %d", &n, &k);
    if (n < 1 || n > 100 || k < 1 || k > n) return 1;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i <= n - k; i++) {
        first = 0;
        for (j = i; j < i + k; j++) if (a[j] < 0) { first = a[j]; break; }
        printf("%d ", first);
    }
    printf("\n");
    return 0;
}
