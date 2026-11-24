// Q145: Solution in beginner-friendly C.\n#include <stdio.h>
struct Student { char name[50]; int roll_no; float marks; };
struct Student topStudent(struct Student students[], int count) {
    int i, highest = 0;
    for (i = 1; i < count; i++) if (students[i].marks > students[highest].marks) highest = i;
    return students[highest];
}
int main(void) {
    struct Student students[5], top;
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter name, roll number and marks for student %d: ", i + 1);
        scanf("%49s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    top = topStudent(students, 5);
    printf("Top student: %s\nRoll number: %d\nMarks: %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}\n