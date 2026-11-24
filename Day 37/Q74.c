// Q74: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int rows, cols, i, j, a[20][20];
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if (rows < 1 || rows > 20 || cols < 1 || cols > 20) return 1;
    for (i = 0; i < rows; i++) for (j = 0; j < cols; j++) scanf("%d", &a[i][j]);
    printf("Transpose:\n");
    for (j = 0; j < cols; j++) { for (i = 0; i < rows; i++) printf("%d ", a[i][j]); printf("\n"); }
    return 0;
}
