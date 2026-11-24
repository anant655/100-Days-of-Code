// Q75: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int r, c, i, j, a[20][20], b[20][20];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    if (r < 1 || r > 20 || c < 1 || c > 20) return 1;
    printf("Enter first matrix:\n");
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &a[i][j]);
    printf("Enter second matrix:\n");
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &b[i][j]);
    printf("Sum matrix:\n");
    for (i = 0; i < r; i++) { for (j = 0; j < c; j++) printf("%d ", a[i][j] + b[i][j]); printf("\n"); }
    return 0;
}
