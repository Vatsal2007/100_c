#include <stdio.h>

int main(){
 int n;
 printf("enter size n"); //asks user for dimensiion of matrix.(square only) (3*3) / (2*2) / (4*4) etc.
 scanf("%d"  ,&n);

 int a[50][50] ; int i ,j  , ok = 1 ; //ok tells if the matrix is symmentric or not

 printf("enter matrix :\n");//asks user to input matrix elements.
 for(i=0 ;i<n ;i++){
  for(j= 0 ; j <n; j++)
   scanf("%d",&a[i][ j ]);
 }

 for(i = 0; i <n ; i++ ){ //checking for symmetric. for symmetric, a[i][j] must be equal to a[j][i].
  for(j =0; j < n ; j++){
   if(a[i][j] != a[j][i] ){//if nothing matches
     ok = 0 ; //mark as non symmetric
     break ;} }//break out
  
  if(ok==0) break ;// no use checking forward
 }

 if(ok==1)          
   printf("yes symmetric");
 else                         // print final answer.
   printf("not symmetric");

 return 0;
}
