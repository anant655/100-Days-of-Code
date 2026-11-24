// Q136: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    enum Operation { ADD = 1, SUBTRACT, MULTIPLY };
    int choice, a, b;
    printf("Enter choice (1=ADD, 2=SUBTRACT, 3=MULTIPLY): ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch (choice) {
        case ADD: printf("Result = %d\n", a + b); break;
        case SUBTRACT: printf("Result = %d\n", a - b); break;
        case MULTIPLY: printf("Result = %d\n", a * b); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}\n