#include <stdio.h>

int main() {
    int r , c;
    printf("Enter rows and columns : ");
    scanf("%d %d" , &r , &c);

    int a[50][50]  , b[50][50] , sum[50][50];
    int i,j;

    printf("Enter elements of first matrix: "); //input taken for elements of first matrix.
    for(i =0 ; i <r; i++){
    for(j =0; j <c; j++){
    scanf("%d", &a[i][j]);}}

    printf("Enter elements of second matrix:"); //iinput taken for elements of second matrix.
    for(i = 0; i <r; i++){
    for(j =0 ; j< c ; j++){
    scanf("%d", &b[i][j]);}
    }
        

    for(i = 0; i < r; i++){  //matrix 1 and matrix two have been added.
    for(j = 0; j < c; j++){
    sum[i][j] = a[i][j] + b[i][j];}}
    

    printf("Resultant matrix (A + B): \n"); //resultant matrix printed.
    for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
     printf("%d ", sum[i][j]);}

        printf("\n");
    }

    return 0;
}                             //end of code.
