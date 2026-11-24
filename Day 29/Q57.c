// Q57: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int n, i, a[100], sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) { scanf("%d", &a[i]); sum += a[i]; }
    printf("Sum = %d\n", sum);
    return 0;
}
