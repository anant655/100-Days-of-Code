// Q80: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int r1, c1, r2, c2, i, j, k, a[20][20], b[20][20], product[20][20] = {{0}};
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (r1 < 1 || r1 > 20 || c1 < 1 || c1 > 20 || r2 < 1 || r2 > 20 || c2 < 1 || c2 > 20 || c1 != r2) {
        printf("Multiplication is not possible\n"); return 1;
    }
    for (i = 0; i < r1; i++) for (j = 0; j < c1; j++) scanf("%d", &a[i][j]);
    for (i = 0; i < r2; i++) for (j = 0; j < c2; j++) scanf("%d", &b[i][j]);
    for (i = 0; i < r1; i++) for (j = 0; j < c2; j++)
        for (k = 0; k < c1; k++) product[i][j] += a[i][k] * b[k][j];
    for (i = 0; i < r1; i++) { for (j = 0; j < c2; j++) printf("%d ", product[i][j]); printf("\n"); }
    return 0;
}
