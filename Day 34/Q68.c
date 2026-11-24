// Q68: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, i, a[100], position;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter position to delete (1-based): ");
    scanf("%d", &position);
    if (position < 1 || position > n) { printf("Invalid position\n"); return 1; }
    for (i = position - 1; i < n - 1; i++) a[i] = a[i + 1];
    printf("Updated array: ");
    for (i = 0; i < n - 1; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
