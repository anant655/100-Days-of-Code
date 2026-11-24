// Q142: Solution in beginner-friendly C.
#include <stdio.h>
struct Student { char name[50]; int roll_no; float marks; };
int main(void) {
    struct Student students[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter name, roll number and marks for student %d: ", i + 1);
        scanf("%49s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    printf("\nAll student records:\n");
    for (i = 0; i < 5; i++) printf("%s | Roll: %d | Marks: %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    return 0;
}
