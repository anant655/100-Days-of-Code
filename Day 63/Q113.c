// Q113: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, k, a[100], i, j, temp;
    printf("Enter size and k: "); scanf("%d %d", &n, &k);
    if (n < 1 || n > 100 || k < 1 || k > n) return 1;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++) for (j = 0; j < n - i - 1; j++)
        if (a[j] > a[j+1]) { temp = a[j]; a[j] = a[j+1]; a[j+1] = temp; }
    printf("Kth smallest = %d\n", a[k-1]);
    return 0;
}
