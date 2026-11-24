// Q108: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, a[100], answer[100], i;
    long long prefix = 1, suffix = 1;
    printf("Enter size: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) { answer[i] = (int)prefix; prefix *= a[i]; }
    for (i = n - 1; i >= 0; i--) { answer[i] = (int)(answer[i] * suffix); suffix *= a[i]; }
    for (i = 0; i < n; i++) printf("%d ", answer[i]);
    printf("\n");
    return 0;
}\n