// Q116: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, a[100], target, i, j;
    printf("Enter size: "); scanf("%d", &n);
    if (n < 2 || n > 100) return 1;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter target: "); scanf("%d", &target);
    for (i = 0; i < n; i++) for (j = i + 1; j < n; j++)
        if (a[i] + a[j] == target) { printf("%d %d\n", i, j); return 0; }
    printf("-1 -1\n");
    return 0;
}
