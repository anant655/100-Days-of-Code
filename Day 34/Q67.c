// Q67: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, i, a[101], value, position;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 0 || n >= 100) return 1;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter value and position (1-based): ");
    scanf("%d %d", &value, &position);
    if (position < 1 || position > n + 1) { printf("Invalid position\n"); return 1; }
    for (i = n; i >= position; i--) a[i] = a[i - 1];
    a[position - 1] = value;
    printf("Updated array: ");
    for (i = 0; i <= n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
