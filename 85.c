#include <stdio.h>
#include <string.h>

int main() {
    char str[100];//string declared
    int i, j , temp;//variables declaredS

printf("Enter a string: ");
    gets(str);

 j = strlen(str) - 1;   // last index
i = 0;                 // first index
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

     i++;
    j--;
    }
    printf("Reversed string: ");
    puts(str);
    return 0;
}
