#include <stdio.h>
#include <string.h>

struct student {
    char name[30];
    int mark;
    char sub;
};

int main() {
    struct student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i+1);
        fgets(students[i].name, 30, stdin);
        printf("Enter mark for student %d: ", i+1);
        scanf("%d", &students[i].mark);
        printf("Enter subject %d: ", i+1);
        scanf("%c", &students[i].sub);
        getchar(); 
    }

    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", students[i].name);
        printf("mark: %d\n", students[i].mark);
        printf("sub: %c\n", students[i].sub);
    }

    return 0;
}
