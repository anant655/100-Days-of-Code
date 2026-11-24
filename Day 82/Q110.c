// Q110: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, k, a[100], i, j, maximum;
    printf("Enter size and window size k: "); scanf("%d %d", &n, &k);
    if (n < 1 || n > 100 || k < 1 || k > n) return 1;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i <= n - k; i++) {
        maximum = a[i];
        for (j = i + 1; j < i + k; j++) if (a[j] > maximum) maximum = a[j];
        printf("%d ", maximum);
    }
    printf("\n");
    return 0;
}\n