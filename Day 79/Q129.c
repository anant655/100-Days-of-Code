// Q129: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    FILE *file = fopen("numbers.txt", "r");
    int number, count = 0;
    long long sum = 0;
    if (file == NULL) { printf("Cannot open numbers.txt\n"); return 1; }
    while (fscanf(file, "%d", &number) == 1) { sum += number; count++; }
    fclose(file);
    if (count == 0) { printf("No numbers found\n"); return 0; }
    printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / count);
    return 0;
}
