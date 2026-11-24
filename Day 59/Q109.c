// Q109: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, k, a[100], i, sum = 0, maximum;
    printf("Enter size and window size k: "); scanf("%d %d", &n, &k);
    if (n < 1 || n > 100 || k < 1 || k > n) return 1;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < k; i++) sum += a[i];
    maximum = sum;
    for (i = k; i < n; i++) { sum += a[i] - a[i-k]; if (sum > maximum) maximum = sum; }
    printf("Maximum window sum = %d\n", maximum);
    return 0;
}\n