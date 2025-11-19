#include <stdio.h>

int main() { 
    char str[100];
    int i= 0;

    printf("Enter a string: ");
    gets(str);  //input string from user

    while (str[i]!='\0') { //run loop till we hit null operator
        i++;//counter increased by 1 for every character
    }

    printf("number of characters= %d", i);

    return 0;
}
