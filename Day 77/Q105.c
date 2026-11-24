// Q105: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    int n, a[100], i, candidate = 0, count = 0, frequency = 0;
    printf("Enter size: "); scanf("%d", &n);
    if (n < 1 || n > 100) return 1;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (count == 0) candidate = a[i], count = 1;
        else if (a[i] == candidate) count++;
        else count--;
    }
    for (i = 0; i < n; i++) if (a[i] == candidate) frequency++;
    if (frequency > n / 2) printf("Majority element = %d\n", candidate);
    else printf("-1\n");
    return 0;
}\n