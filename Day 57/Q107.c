// Q107: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, a[100], i, j, previous;
    printf("Enter size: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        previous = -1;
        for (j = i - 1; j >= 0; j--) if (a[j] > a[i]) { previous = a[j]; break; }
        printf("%d", previous);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
    return 0;
}\n