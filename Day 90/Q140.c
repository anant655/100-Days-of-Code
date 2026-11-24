// Q140: Solution in beginner-friendly C.\n#include <stdio.h>
int main(void) {
    enum Gender { MALE, FEMALE, OTHER };
    struct Person { char name[50]; enum Gender gender; } person;
    int choice;
    printf("Enter name: "); scanf("%49s", person.name);
    printf("Enter gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", &choice);
    if (choice < 0 || choice > 2) { printf("Invalid gender\n"); return 1; }
    person.gender = (enum Gender)choice;
    printf("%s's gender: ", person.name);
    if (person.gender == MALE) printf("Male\n");
    else if (person.gender == FEMALE) printf("Female\n");
    else printf("Other\n");
    return 0;
}\n