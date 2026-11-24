// Q78: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, i, j, a[20][20], sum = 0;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    if (n < 1 || n > 20) return 1;
    for (i = 0; i < n; i++) for (j = 0; j < n; j++) {
        scanf("%d", &a[i][j]);
        if (i == j) sum += a[i][j];
    }
    printf("Main diagonal sum = %d\n", sum);
    return 0;
}\n