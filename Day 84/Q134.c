// Q134: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    int status;
    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &status);
    switch (status) {
        case SUCCESS: printf("Operation completed successfully\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
        default: printf("Invalid status\n");
    }
    return 0;
}\n