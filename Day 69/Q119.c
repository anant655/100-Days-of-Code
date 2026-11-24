// Q119: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, a[100], i, j;
    printf("Enter size: "); scanf("%d", &n);
    if (n < 2 || n > 100) return 1;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) for (j = i + 1; j < n; j++)
        if (a[i] == a[j]) { printf("Repeated element = %d\n", a[i]); return 0; }
    printf("No repeated element\n");
    return 0;
}
