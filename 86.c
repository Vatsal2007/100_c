#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0 ,j;

    printf("Enter a string: ");
    gets(str);

    j=strlen(str)-1;// last index

    while(i < j) {
 if (str[i] != str[j]) {
    printf("Not a palindrome\n");
    return 0;}
        i++;  //incrementing i
        j--;  //decrementing j
    }

    printf("Palindrome\n");

    return 0;
}
