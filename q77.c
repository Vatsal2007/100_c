#include <stdio.h>

int main() {

 int n ;   
 printf("size of the matrix? ");    // asking for n x n matrix (square)
 scanf("%d",&n);

 int a[50][50] ;
 int i , j , flag = 1 ;    // flag=1 means all diag elems are diff (till proved wrong)

 printf("give matrix values:\n");   // user puts n*n numbers
 for(i= 0 ;i <n; i++){
  for(j=0 ; j<n ; j++){
    scanf("%d",&a[i][ j ]);   // fill matrix
  }
 }

 // now check diagonal distinctiveness
 for(i=0;i<n; i++){
   for(j=i+1 ; j<n ; j++){  
     // comparing diag elements with ones after it
     if(a[i][i] == a[j][j]){   // if any two diagonals values same
        flag = 0 ;             // then not distinct
        break;   }}              // stop checking
     
   if(flag==0) break ;    }     // break outside too
 
 if(flag==1)
   printf(" diagonal values are all diff \n");   // all distinct
 else
   printf(" some diagonal values repeat \n");   // found duplicates

 return 0;
}
