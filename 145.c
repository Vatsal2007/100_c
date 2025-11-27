#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopper(struct Student s[], int n) {
    int top = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks)
            top = i;
    }
    return s[top];
}

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    struct Student t = getTopper(s, 5);
    printf("%s %d %.2f\n", t.name, t.roll_no, t.marks);

    return 0;
}