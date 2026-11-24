// Q59: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, i, a[100], even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even = %d\nOdd = %d\n", even, odd);
    return 0;
}\n