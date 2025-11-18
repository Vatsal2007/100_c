#include <stdio.h>

int main() {

  int n ;
  printf("enter size of matrix : ");   // for n x n matrix
  scanf("%d" ,&n);

  int a[40][40] ;
  int i, j, s = 0;   // s = sum of diag elements

  printf("put matrix nums:\n");   // user gives n*n
  for(i=0;i<n;i++){
    for(j=0 ; j<n ; j++){
      scanf("%d",&a[i][ j ]); }}  //matrix values filled by user 
    
  for(i=0 ; i<n ; i++){ // main diagonal means (0,0) (1,1) (2,2)...
     s  = s + a[i][ i ];   // add the diag elem
  }
  printf("sum diag = %d\n",s);  // final result

  return 0 ;
}
