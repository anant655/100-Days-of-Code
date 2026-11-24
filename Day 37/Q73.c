// Q73: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int rows, cols, i, j, a[20][20], rowSum[20];
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if (rows < 1 || rows > 20 || cols < 1 || cols > 20) return 1;
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++) { scanf("%d", &a[i][j]); rowSum[i] += a[i][j]; }
    }
    printf("Row sums: ");
    for (i = 0; i < rows; i++) printf("%d ", rowSum[i]);
    printf("\n");
    return 0;
}
