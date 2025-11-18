#include <stdio.h>

int main(){
 int r , c ;
 printf("enter r , c : ");
 scanf("%d %d",&r,&c);

 int a[60][60] , rs[60];
 int i , j ;
 printf("Enter %d numbers : " , r*c);
 for(i=0 ; i<r; i++){
   rs[i] = 0 ;
   for(j=0 ; j<c ; j++){
      
scanf("%d",&a[i][ j ]);
rs[ i ] = rs[i] + a[i][j];} }
   

 printf("row sums :  ");
 for(i=0 ; i<r ; i++ ){
   printf("%d ", rs[i]); }
 

 return 0 ;
}
