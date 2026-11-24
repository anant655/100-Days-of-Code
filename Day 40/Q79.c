// Q79: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    int r, c, i, j, a[20][20], d;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    if (r < 1 || r > 20 || c < 1 || c > 20) return 1;
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &a[i][j]);
    printf("Diagonal traversal: ");
    for (d = 0; d < r + c - 1; d++) {
        int start = d < c ? 0 : d - c + 1;
        int end = d < r ? d : r - 1;
        for (i = start; i <= end; i++) printf("%d ", a[i][d - i]);
    }
    printf("\n");
    return 0;
}
