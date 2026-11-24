// Q132: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    enum TrafficLight { RED, YELLOW, GREEN };
    int choice;
    printf("Enter traffic light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &choice);
    switch (choice) {
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
