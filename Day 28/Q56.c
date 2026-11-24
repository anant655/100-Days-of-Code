// Q56: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, i;
    int a[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Array elements: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
