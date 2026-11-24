// Q62: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, i, a[100], temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n / 2; i++) {
        temp = a[i]; a[i] = a[n - 1 - i]; a[n - 1 - i] = temp;
    }
    printf("Reversed array: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}\n