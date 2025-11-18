#include <stdio.h>

int main() {
    int r , c;
    printf("enter rows and cols: ");
    scanf("%d %d" , &r , &c);

    int a[50][50], t[50][50];
    int i, j;

    printf("Enter %d numbers:", r * c);
    for(i= 0 ; i < r; i++){
    for(j = 0 ; j < c; j++){
    scanf("%d" , &a[i][j]);}}

    for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
    t[j][i] = a[i][j];}}
        
    printf("the transpose is: \n");
    for(i = 0; i < c; i++){
        for(j= 0 ; j< r; j++){
            printf("%d " ,  t[i][j]);}
        
        printf("\n");
    }
    return 0;
}
