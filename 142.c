#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll no: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    return 0;
}