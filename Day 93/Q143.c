// Q143: Solution in beginner-friendly C.
#include <stdio.h>
struct Student { char name[50]; int roll_no; float marks; };
int main(void) {
    struct Student students[5];
    int i, highest = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter name, roll number and marks for student %d: ", i + 1);
        scanf("%49s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
        if (students[i].marks > students[highest].marks) highest = i;
    }
    printf("Top student: %s, Roll: %d, Marks: %.2f\n", students[highest].name, students[highest].roll_no, students[highest].marks);
    return 0;
}
