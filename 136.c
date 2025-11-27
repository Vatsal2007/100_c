#include <stdio.h>

int main() {
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };
    enum Menu choice = MULTIPLY;

    int a = 6, b = 4;

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}