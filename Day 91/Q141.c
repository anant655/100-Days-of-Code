// Q141: Solution in beginner-friendly C.\n#include <stdio.h>
struct Student { char name[50]; int roll_no; float marks; };
int main(void) {
    struct Student student;
    printf("Enter student name: "); scanf("%49s", student.name);
    printf("Enter roll number and marks: "); scanf("%d %f", &student.roll_no, &student.marks);
    printf("\nStudent details\nName: %s\nRoll number: %d\nMarks: %.2f\n", student.name, student.roll_no, student.marks);
    return 0;
}\n