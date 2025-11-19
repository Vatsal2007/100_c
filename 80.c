#include <stdio.h>

int main() {
    int m1rows,  m1cols, m2rows , m2cols;
    
 // Input dimensions of first matrix
       printf("Enter rows and columns of first matrix: ");
scanf("%d %d", &m1rows, &m1cols);
    
    // Input dimensions of second matrix
         printf("Enter rows and columns of second matrix: ");
     scanf("%d %d", &m2rows, &m2cols);
    
    // Check if multiplication is possible
if (m1cols!= m2rows) {
    printf("matrix mult not possible");
        return 0;
    }
    
     int matrix1[m1rows][m1cols] , matrix2[m2rows][m2cols],result[m1rows][m2cols];
    
    // Input elements of first matrix
    printf("Enter elements of first matrix \n");
    for (int i = 0; i < m1rows; i++) {
        for (int j =0; j <m1cols ; j++) {
            scanf("%d" , &matrix1[i][j]);}}
    
     
printf("Enter elements of second matrix:\n");// Input elements of second matrix
 for (int i =0; i< m2rows;i++) {
for (int j = 0;j < m2cols; j++) {
 scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Initialize result matrix to 0
    for (int i = 0; i < m1rows; i++) {
        for (int j = 0; j < m2cols; j++) {
            result[i][j] = 0;
        }}
    
    
    // Matrix multiplication
    for  (int i = 0; i <  m2rows; i++) {
for (int j = 0; j < m2cols; j++) {
    for (int k = 0; k < m1cols; k++)  {
result[i][j] += matrix1[i][k]*matrix2[k][j];}}}
            
    
    // Print result
    printf("Resultant matrix:\n");
    for (int i = 0; i < m1rows; i++) {
for (int j = 0; j < m2cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");}
    
    
    return 0;}

