#include <stdio.h>

int main() {
    enum Gender { MALE, FEMALE, OTHER };

    struct Person {
        char name[20];
        enum Gender gender;
    };

    struct Person p = { "Alex", FEMALE };

    if (p.gender == MALE)
        printf("Gender: Male\n");
    else if (p.gender == FEMALE)
        printf("Gender: Female\n");
    else
        printf("Gender: Other\n");

    return 0;
}