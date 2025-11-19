#include <stdio.h>

int main(){
int n = 3,m = 4;

// initialising a 3x4 matrix
int a[3][4] = {{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12}};
                
// total diagonals=n + m - 1
for(int s =0; s < n + m - 1 ; s++){
// going through each row
for(int i = 0; i < n; i++){
            
 // for diagonal: j is decided by (sum - i) 
 int j = s -i;

// checking if j is inside valid column range
if(j  >= 0 && j <m){
 // print element which lies on the diag
printf("%d ",a[i][j]);
    }}
        
// new line after each diagonal
printf("\n");} }
    

