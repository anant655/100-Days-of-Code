// Q104: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    long long n, x, left = 0, right;
    printf("Enter n: "); scanf("%lld", &n);
    if (n < 1) return 1;
    right = n * (n + 1) / 2;
    for (x = 1; x <= n; x++) {
        left += x;
        if (left == right) { printf("Pivot integer = %lld\n", x); return 0; }
        right -= x - 1;
    }
    printf("-1\n");
    return 0;
}
