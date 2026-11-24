// Q121: Solution in beginner-friendly C.
#include <stdio.h>
int main(void) {
    char name[100];
    int age;
    FILE *file = fopen("info.txt", "w");
    if (file == NULL) { printf("Unable to create file\n"); return 1; }
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter age: ");
    scanf("%d", &age);
    fprintf(file, "Name: %sAge: %d\n", name, age);
    fclose(file);
    printf("Data successfully saved in info.txt\n");
    return 0;
}
