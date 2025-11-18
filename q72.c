#include <stdio.h>

  int main( ){
    int r , c ;
    printf("rows , cols : ");
    scanf("%d %d" ,&r , &c );

    int a[100][100];
    int i ,j, s = 0 ;

    printf("enter %d nums :  ", r*c);
    for(i=0 ;i <r ; i++ ){
    for(j =0; j <c ; j++ ){
    scanf("%d" , &a[i][j] );
s = s + a[i][j] ; }}
        
    

    printf("matrix  :\n");
    for(i=0; i<r; i++ ){
    for(j=0 ; j< c ;j++ )  {
    printf("%d  ",a[i][j]);}
     printf("\n");}
    
    printf("sum  = %d", s );
    return 0 ;
}
