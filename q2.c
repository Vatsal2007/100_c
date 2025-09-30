#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, prod;
    float quot;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

   
    sum = a + b;
    diff = a - b;
    prod = a * b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    
    if (b != 0) {
        quot = a / b;
        printf("Quotient = %f\n", quot);
    }
     else 
        printf("Division not possible.\n");
    

    return 0;
}
