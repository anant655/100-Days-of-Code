// Q102: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, a[100], x, i, answer = -1;
    printf("Enter size: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter sorted array: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter x: "); scanf("%d", &x);
    for (i = 0; i < n; i++) if (a[i] >= x) { answer = i; break; }
    printf("%d\n", answer);
    return 0;
}\n