// Q117: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int m, n, a[100], b[100], result[200], i = 0, j = 0, k = 0;
    printf("Enter sizes of two sorted arrays: "); scanf("%d %d", &m, &n);
    if (m < 0 || n < 0 || m + n > 200) return 1;
    for (i = 0; i < m; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) scanf("%d", &b[i]);
    i = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) result[k++] = a[i++];
        else result[k++] = b[j++];
    }
    while (i < m) result[k++] = a[i++];
    while (j < n) result[k++] = b[j++];
    for (i = 0; i < k; i++) printf("%d ", result[i]);
    printf("\n");
    return 0;
}
