// Q144: Solution in beginner-friendly C.\n#include <stdio.h>
struct Student { char name[50]; int roll_no; float marks; };
void displayStudent(struct Student student) {
    printf("Name: %s\nRoll number: %d\nMarks: %.2f\n", student.name, student.roll_no, student.marks);
}
int main(void) {
    struct Student student;
    printf("Enter name, roll number and marks: ");
    scanf("%49s %d %f", student.name, &student.roll_no, &student.marks);
    displayStudent(student);
    return 0;
}\n