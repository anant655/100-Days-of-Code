// Q72: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int rows, cols, i, j, a[20][20], sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if (rows < 1 || rows > 20 || cols < 1 || cols > 20) return 1;
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) for (j = 0; j < cols; j++) { scanf("%d", &a[i][j]); sum += a[i][j]; }
    printf("Sum = %d\n", sum);
    return 0;
}
