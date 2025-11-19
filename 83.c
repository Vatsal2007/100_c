#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

printf("Enter a string:");
    gets(str);

    while (str[i]!= '\0') {
    char ch = str[i];

                                                                     //checks for vowwel
    if (ch=='a'||ch== 'e' || ch== 'i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch =='I' || ch=='O' || ch =='U') {
            vowels++;
        }
        // Check for consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;}
        

        i++;
    }

    printf("Vowels = %d ", vowels);
    printf("consonants = %d", consonants);

    return 0;
}
