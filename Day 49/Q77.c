// Q77: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, i, j, a[20][20], distinct = 1;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    if (n < 1 || n > 20) return 1;
    for (i = 0; i < n; i++) for (j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++) for (j = i + 1; j < n; j++)
        if (a[i][i] == a[j][j]) distinct = 0;
    printf("%s\n", distinct ? "Diagonal elements are distinct" : "Diagonal elements are not distinct");
    return 0;
}\n