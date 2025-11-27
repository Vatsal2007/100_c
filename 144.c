#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("%s %d %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s1 = { "Arjun", 12, 88.5 };
    printStudent(s1);
    return 0;
}