#include <stdio.h>

int main() {
    enum Sample { A = 5, B = 10, C = 20 };

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    return 0;
}