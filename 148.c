#include <stdio.h>
#include <string.h>     // for strcmp()

// making a struct for student
struct student {
    char name[30] ; // name
    int roll ;        // roll number
    float marks ;   // marks
};

int main() {

    struct student s1 ,s2 ;   // two students

             // input for first student 
    printf("enter name for student1 : ");      // ask name
    scanf("%s", s1.name);

    printf("enter roll for student1 : ");   // ask roll
    scanf("%d", &s1.roll);

    printf("enter marks for student1 : ");      // ask marks
    scanf("%f", &s1.marks);


       //input for second student
    printf("\nenter name for student2 : ");   // ask name
    scanf("%s" , s2.name);

    printf("enter roll for student2 : ");     //ask roll
    scanf("%d",&s2.roll);

    printf("enter marks for student2 : ");        //ask marks
    scanf("%f", &s2.marks);


    //checking if both are same
   //check for roll num, name , and marks
    if( strcmp(s1.name , s2.name)==0     && 
        s1.roll==s2.roll               && 
        s1.marks == s2.marks ) 
    {
        printf("\nBoth structures are IDENTICAL\n");   // same
    }
    else {
        printf("\nThey arent  identical\n");  }        //not same
    

    return 0 ;
}
