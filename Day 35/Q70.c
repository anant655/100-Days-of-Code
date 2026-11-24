// Q70: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, k, i, a[100], result[100];
    printf("Enter number of elements and k: ");
    scanf("%d %d", &n, &k);
    if (n < 1 || n > 100) return 1;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    k = k % n;
    for (i = 0; i < n; i++) result[(i + k) % n] = a[i];
    printf("Rotated array: ");
    for (i = 0; i < n; i++) printf("%d ", result[i]);
    printf("\n");
    return 0;
}\n