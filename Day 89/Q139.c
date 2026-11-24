// Q139: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    enum Number { TEN = 10, TWENTY = 20, FIFTY = 50 };
    int values[] = {TEN, TWENTY, FIFTY};
    int i;
    for (i = 0; i < 3; i++) printf("Enum value stored as integer: %d\n", values[i]);
    return 0;
}
