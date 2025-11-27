#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, top = 0;

    for (i = 0; i < 5; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[top].marks)
            top = i;
    }

    printf("Topper: %s %d %.2f\n", s[top].name, s[top].roll_no, s[top].marks);

    return 0;
}