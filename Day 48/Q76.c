// Q76: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, i, j, a[20][20], symmetric = 1;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    if (n < 1 || n > 20) return 1;
    for (i = 0; i < n; i++) for (j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++) for (j = i + 1; j < n; j++)
        if (a[i][j] != a[j][i]) symmetric = 0;
    printf("%s\n", symmetric ? "Symmetric matrix" : "Not symmetric");
    return 0;
}\n