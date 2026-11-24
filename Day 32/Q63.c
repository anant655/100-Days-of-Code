// Q63: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, m, i, a[100], b[100];
    printf("Enter sizes of the two arrays: ");
    scanf("%d %d", &n, &m);
    if (n < 0 || m < 0 || n + m > 100) return 1;
    printf("Enter first array: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter second array: ");
    for (i = 0; i < m; i++) scanf("%d", &b[i]);
    printf("Merged array: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    for (i = 0; i < m; i++) printf("%d ", b[i]);
    printf("\n");
    return 0;
}
