#include <stdio.h>

struct emp {
   char name[30];     // employee name
   int id;         // employee id
   float salary;    // salary
};

int main() {

     struct emp e1 , e2 ;  // e1 for writing  , e2 for reading
     FILE *fp ;            //  pointer for filr

     // writing part to binary 
     fp = fopen("emp.bin" , "wb") ;   // open file in write binary
     if(fp == NULL){
         printf("cant open :(");            // error if file not opened
         return 0 ;
     }

     printf("enter name  : ");        // take name
     scanf("%s", e1.name );  

     printf("enter id : ");                  // take id
     scanf("%d" , &e1.id );

     printf("enter salary   : ");     // take salary
     scanf("%f" ,&e1.salary );

     fwrite( &e1 ,sizeof(struct emp) ,1 ,fp ) ;                  // write whole struc

     fclose(fp);             //file closed after writing 


     // reading part from binary
     fp = fopen("emp.bin" , "rb") ;   // open file in read-binary
     if(fp == NULL){
         printf("again cant open file dude");  // error
         return 0 ;
     }

     fread( &e2 , sizeof(struct emp) , 1 , fp ) ;   // read struct back

     // printing data we got
     printf("\n--- data from file ---\n");
     printf("name   : %s\n" ,e2.name );    // print name
     printf("id     : %d\n"   ,e2.id );      // print id
     printf("salary : %.2f\n", e2.salary );// print salary

     fclose(fp) ;    // close file again

     return 0 ;      // done
}
