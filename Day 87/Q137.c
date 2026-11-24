// Q137: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    enum Role { ADMIN, USER, GUEST };
    int role;
    printf("Enter role (0=ADMIN, 1=USER, 2=GUEST): ");
    scanf("%d", &role);
    switch (role) {
        case ADMIN: printf("Welcome, administrator. You have full access.\n"); break;
        case USER: printf("Welcome, user. You have standard access.\n"); break;
        case GUEST: printf("Welcome, guest. You have limited access.\n"); break;
        default: printf("Invalid role\n");
    }
    return 0;
}
