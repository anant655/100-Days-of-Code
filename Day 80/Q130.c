// Q130: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    FILE *file = fopen("students.txt", "w");
    char name[50];
    int roll, i;
    float marks;
    if (file == NULL) { printf("Cannot create file\n"); return 1; }
    for (i = 0; i < 3; i++) {
        printf("Enter name, roll number and marks for student %d: ", i + 1);
        scanf("%49s %d %f", name, &roll, &marks);
        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(file);
    file = fopen("students.txt", "r");
    if (file == NULL) return 1;
    printf("\nStudent records:\n");
    while (fscanf(file, "%49s %d %f", name, &roll, &marks) == 3)
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    fclose(file);
    return 0;
}
