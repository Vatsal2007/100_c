#include <stdio.h>

int main() {
    enum Role { ADMIN, USER, GUEST };
    enum Role r = USER;

    if (r == ADMIN) {
        printf("Admin access granted\n");
    } else if (r == USER) {
        printf("User access granted\n");
    } else if (r == GUEST) {
        printf("Guest access granted\n");
    }

    return 0;
}