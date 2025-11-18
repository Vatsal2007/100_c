#include <stdio.h>

int main(){
    int r,c;
    printf("enter the number of rows you want: ");
    scanf("%d", &r);
   printf("Enter the number of columns you want : ");
   scanf("%d" , &c);
    int m[100][100];
    int i,j;

    printf("enter %d nums\n", r*c);
    for(i=0;i<r ;i++){
        for(j=0; j<c;j++){
            scanf("%d",&m[i][j]);}}
        
    

    printf("The matrix is :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",m[i][j]);}
        
        printf("\n");}
    

    return 0;}

