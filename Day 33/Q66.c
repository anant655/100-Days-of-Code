// Q66: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, i, a[101], value, position;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);
    if (n < 0 || n >= 100) return 1;
    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter value to insert: ");
    scanf("%d", &value);
    position = 0;
    while (position < n && a[position] < value) position++;
    for (i = n; i > position; i--) a[i] = a[i - 1];
    a[position] = value;
    printf("Updated array: ");
    for (i = 0; i <= n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
